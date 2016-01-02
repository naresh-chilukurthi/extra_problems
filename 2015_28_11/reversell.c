#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node* construct_list(struct node* head,int count)
{   struct node *temp,*r;int ele,i;
    for(i=0;i<count;i++)
    {

    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));scanf("%d",&ele);
        head->data=ele;
        head->next=NULL;
            temp=head;
    }
    else
        {
            r=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&ele);
            r->data=ele;
            r->next=NULL;
            temp->next=r;
            temp=temp->next;
        //printf("hello else");
        }
    }
    temp=head;
    return head;
}
struct node* reverse(struct node* head)
{   struct node* reverseHead;
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    reverseHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return reverseHead;

}
int main()
{
    int l;
    struct node *head,*temp;head=NULL;
    scanf("%d",&l);
    head=construct_list(head,l);
    head=reverse(head);temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

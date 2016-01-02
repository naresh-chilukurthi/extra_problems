#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node* construct_list(struct node* head,int count)
{   struct node *temp,*r;int ele,i;printf("Hiiiiiii");
    for(i=0;i<count;i++)
    {

    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));scanf("%d",&ele);
        head->data=ele;
        head->next=head;
            temp=head;
    }
    else
        {
            r=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&ele);
            r->data=ele;
            r->next=head;
            temp->next=r;
            temp=temp->next;
       // printf("temp->data %d",temp->next->data);
        }
    }

    return head;
}
struct node* addnode(struct node* head,int num)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=head->data;temp->next=head->next;
    head->data=num;head->next=temp;head=head->next;return head;
}
int main()
{
    struct node *p,*temp;int l1;
    p=NULL;
    scanf("%d ",&l1);
    p=construct_list(p,l1);printf("returned");
     p= addnode(p,10);temp=p->next;printf("%d",p->data);
    while(temp!=p)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}

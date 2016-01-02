#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
float find_median(struct node* head);
float find_median(struct node* head)
{
    struct node *temp,*median;
    temp=head;median=head;
    if(head->next!=NULL)
    {
    while((temp->next)!=NULL&&(temp->next->next)!=NULL)
    {
        temp=temp->next->next;
        median=median->next;
    }

     if (temp->next==NULL)
    {
         return median->data;
    }
    else
    {
        return (median->data+median->next->data)/2.0;
    }
    }
    else
        return head->data;

}
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
int main()
{
    struct node *head,*temp;head=NULL;
        head=construct_list(head,8);
        printf("median %f",find_median(head));
}

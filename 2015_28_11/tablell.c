#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node*  insertlist(struct node* head,int ele);
struct node* merge_tables(struct node *head,int m,int n,int r)
{   struct node* temp;
    int countm=1,countn=1,count=0,valm,valn;head=NULL;
    while(count<r)
    {
        valm=countm*m;
        valn=countn*n;//printf("%d %d %d\n",countm,countn,count);
        if(valm<valn)
        {
            head=insertlist(head,valm);
            countm++;
        }
        else if(valn<valm)
        {
           head=insertlist(head,valn);
           countn++;
        }
        else
        {
            head=insertlist(head,valm);
            countm++;
            countn++;
        }
        count++;
        temp=head;
    }
    return head;
}
struct node*  insertlist(struct node* head,int ele)
{   struct node *temp,*r;int i;
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=ele;
        head->next=NULL;

    }
    else
        {
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            r=(struct node*)malloc(sizeof(struct node));
            r->data=ele;
            r->next=NULL;
            temp->next=r;
            temp=temp->next;
        //printf("hello else");
        }
    return head;
}
int main()
{
    struct node *head,*temp;head=NULL;
    head=merge_tables(head,9,5,5);
    temp=head;//printf("hiiiiiiiii %d",head->data);
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}

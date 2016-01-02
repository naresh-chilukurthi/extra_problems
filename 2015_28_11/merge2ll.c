#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node* merge_lists(struct node* p,struct node* q)
{   struct node *start,*temp;
    if(p->data<q->data)
    {
        start=p;p=p->next;
    }
    else
    {
        start=q;
       q=q->next;
    }

        temp=start;
        while(p!=NULL&&q!=NULL)
        {   //printf("p:%d q:%d\n",p->data,q->data);
            if((p->data)<(q->data))
            {
                temp->next=p;
                temp=temp->next;
                p=p->next;
            }
            else
            {
              //  printf("in q");
                temp->next=q;
                temp=temp->next;
                q=q->next;
            }
            //printf("%d",temp->data);
        }
        if(p==NULL&q!=NULL)
        {
            temp->next=q;
        }
        else if(p!=NULL&&q==NULL)
        {
            temp->next=p;
        }
        temp=start;
        while(temp)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        return start;
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
    struct node *p,*q;int l1,l2;
    p=NULL;q=NULL;
    scanf("%d %d",&l1,&l2);
    p=construct_list(p,l1);
    q=construct_list(q,l2);
    p=merge_lists(p,q);
}

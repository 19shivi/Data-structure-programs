#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
     struct node *prev;
struct node *next;
} *head;
void main()
{
    printf("enter the no of nodes you want to create");
    int n,x;
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    struct node *temp,*newnode;
    head->prev=NULL;
    temp=head;
    while(n)
    {
        printf("enter the data");
        scanf("%d",&temp->data);
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->prev=temp;
        temp->next=newnode;
        temp=temp->next;
        n--;
    }
    temp->next=NULL;
    temp=head;
    while(temp->next)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
printf("enter the node data which you want to delete");
scanf("%d",&x);
temp=head;
if(temp->data==x)
{   head=temp->next;
head->prev=NULL;


}
else{
        while(temp->next->data!=x)
        {
            temp=temp->next;
        }

   temp->next->next->prev=temp;
   temp->next= temp->next->next;
}

temp=head;
    while(temp->next)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

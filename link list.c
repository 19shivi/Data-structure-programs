#include<stdio.h>
#include<stdlib.h>
struct node
{
    int i;
    struct node * link;
} * head;
int main()
{
    struct node *temp,*newnode,*next,*prev;
    int  b,n;
    head=(struct node *)malloc(sizeof(struct node));
    printf("enter the no of nodes required");
    scanf("%d",&n);
    printf("enter the elements");
    temp=head;
    for(int j=0;j<n;j++)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&b);
        temp->i=b;
    temp->link=newnode;
       newnode->link=NULL;
    temp=temp->link;
    }
temp=head;
int data;
printf("enter the data which you want to delete");
scanf("%d",&data);
if(head->i==data)
    head=head->link;
else{
while(temp->link->i!=data)
{
 if(temp->link->link==NULL)
 {printf("data not found");
 break;}
temp=temp->link;
}
if(temp->link->link==NULL)
temp->link=NULL;
else
    temp->link=temp->link->link;

}
temp=head;
while(temp->link)
{

    printf("%d\n",temp->i);
    temp=temp->link;
}
}

#include<stdio.h>
#include<stdlib.h>
#define n 4;
struct node {

int input;
struct node* link;

}*front ,*rear,*temp;

 void deque()

{

    if(front==rear)
        printf("que is empty\n");
    else
    {
front=front->link;

        printf("%d\n",front->input);
    }
}
void inque()
{

  if(front==rear->link)
  {
  printf("que is full\n");
}
else
{
rear=rear->link;
      printf("enter the data\n");
    int data;
    scanf("%d",&data);
    rear->input=data;
}
}

int main()

{ front=rear=(struct node*)malloc(sizeof(struct node));
    front->link=NULL;

     temp=front;
     int j=n;

     while(j)
{
     struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->link=NULL;
    temp->link=new;
    temp=temp->link;
    j--;
}

temp->link=front;

    int i;
    do{
            printf("enter 1 to inque enter 2 for deque  enter 0 for exit)");
            scanf("%d",&i);
        switch(i)
        {
            case 1:inque();
    break;
    case 2:deque();
    break;
    default:printf("invalid entry");
        }

    }
    while(i);
}

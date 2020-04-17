#include<stdio.h>
#define n 4
int front=0,rear=0;
int stack[n];

 void deque()

{
    if(front==rear)
        printf("que is empty\n");
    else
    {
        front= (front+1)%n ;
printf("%d\n",stack[front]);
    }
}
void inque()
{

  if(front==((rear+1)%n))
  {
  printf("que is full\n");

}
else
{
 rear=(rear+1)%n  ;
      printf("enter the data");
    int data;
    scanf("%d",&data);
    stack[rear]=data;
}
}

int main()
{

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

#include<stdio.h>
#include<stdlib.h>
int node=0;
struct node
{
    char data;
    struct node *left,*right;
}*root;

struct node* create()
{ char xyz;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data-----");
    scanf("%c",&xyz);
    fflush(stdin);
    if(xyz=='!')
    {
        return NULL;
    }
    else
    {


    newnode->data=xyz;
    printf("enter the data for the left node of %c\n",xyz);
   newnode->left=create();
     printf("enter the data for the right node of %c\n",xyz);
    newnode->right=create();
    return newnode;
    }
}
int main()
{
 printf("the null is input is done by ! symbol\n");
    root=create();

   int n= nodes(root);
    printf("the no of nodes =%d",n);


}

 int nodes( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    nodes(temp->left);
++node;
nodes(temp->right);

}
return node;
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root;
 struct node* create(struct node*temp,int i)
{
if(temp==NULL)
{
    printf("gupta");
     struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=i;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
else
{
    if((temp->data)>i)
    temp->left=create(temp->left,i);
    else
    temp->right=create(temp->right,i);

}

}
int main()
{  root=NULL;
printf("enter 0 to terminate\n");
    int x=-1;
    int ld,rd;
    struct node *curr,*left1,*right1;
int hght=0;
    while(1)
    {
    printf("enter the BST data");
    scanf("%d",&x);
    if(x==0)
        break;

    root=create(root,x);

    }
      printf(" height of tree is %d",height(root,-1));
      curr=root;











}
int height(struct node *temp,int i)
{ int j,k;
    if(temp==NULL)
        return 0;
    else
    { i++;
        j=height(temp->left,0);
        k=height(temp->right,0);
        if(j>k)
            return i+j;
        else
            return i+k;
    }}



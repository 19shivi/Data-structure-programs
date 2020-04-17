#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *left,*right;
}*root;
 struct node* create(struct node*temp,char i)
{
if(temp==NULL)
{
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
    char x='!';
    printf("enter ! to terminate\n");
char hght=0;
    while(1)
    {
    printf("enter the BST data");
    scanf("%c",&x);

    if(x=='!')
        break;

    root=create(root,x);
    fflush(stdin);
    }
printf("The inorder of BST is:");
 inorder(root);
    printf("\n");
    printf("The preorder of BST is:");
    preorder(root);
     printf("\n");
     printf("The postorder of BST is:");
    postorder(root);
}
void inorder( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    inorder(temp->left);
printf("%c,",temp->data);
inorder(temp->right);

}
}

void preorder( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
 printf("%c,",temp->data);
    preorder(temp->left);
preorder(temp->right);

}
}

void postorder( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    postorder(temp->left);
postorder(temp->right);
printf("%c,",temp->data);
}
}

#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int input;
    struct tree *left,*right;
}*root;

struct tree* create()
{ int data;
    struct tree* newleaf;
    newleaf=(struct node*)malloc(sizeof(struct tree));
    printf("enter the tree data");
    scanf("%d",&data);

    if(data==0)
    {
        return NULL;
    }
    else
    {


    newleaf->input=data;
    printf("enter the left input   of %d  leaf \n",data);
   newleaf->left=create();
     printf("enter the right input   of %d  leaf\n",data);
    newleaf->right=create();
    return newleaf;
    }
}
int main()
{

    root=create();

    printf("the preorder print of the tree is\n");
    preorder(root);

}
void preorder( struct tree *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
 printf("%d,",temp->input);
    preorder(temp->left);
preorder(temp->right);

}
}

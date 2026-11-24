#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*left;
struct node*right;
};
typedef struct node * NODE;
void preorder(NODE root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(NODE root)
{

    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
    }
}
void postorder(NODE root)
{
    if(root!=NULL)
    {
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
    }
}
NODE create BST (NODE root,int item)
{
    NODE temp,prev,cur;
    temp=(NODE)malloc(size of(dtruct node));
    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
        return temp;
    prev=NULL;
    cur=root;
    while(cur!=NULL)
    {
        prev=cur;
        if(item<char->data)
            cur=cur->left;
        elsecur=cur->right;
    }
    if(item<prev->data)
        prev->left=temp;
    elseprev->right=temp;
    retrun root;
}
int main()
{
    NODE root=NULL;
    int ch,item;
    for(;;)
    {
        printf("\n1.insert");
        printf("\n2.preorder");
        printf("\n3.postorder");
        printf("\n4.inorder");
        printf("\n5.exit");
        printf("\n Read choice:);
               scanf("%d",&ch);
               switch(ch)
               {
                   case 1 : printf("\nRead element to be inserted");
                   scanf("%d",&item);
                   root=create BST(root,item);
                   break;
                   case 2 : printf("\n preorder traversal is:");
                   preorder(root);
                   break;
                   case 3 : printf("\n inorder traversal is:");
                   inorder(root);
                   break;
                   case 4 : printf("\n postorder traversal is |n");
                   postorder(root);
                   break;
                   default:exit(0);

               }
    }
    return(0);
}

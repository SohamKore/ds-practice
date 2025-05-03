#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left,*right;

};
struct node *CreateNode(int data)
{
    struct node *newnode=(struct node *)malloc (sizeof(struct node));
    newnode->data=data;
    newnode->left = newnode -> right=NULL;
}
    
struct node *insert(struct node *root,int data)
    {
        if(root==0)
        {
            return CreateNode(data);
        }
        if(data>root->data)
        {
            root->right=insert(root->right,data);
        }
        if(data<root->data)
        {
            root->left=insert(root->left,data);
        }
        return root;
    }
    void inorder(struct node*root)
    {
        if(root==NULL)
        {
            return ;
        }
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    void preorder(struct node*root)
    {
        if(root==NULL)
        {
            return ;
        }
    
        printf("%d ",root->data);
        inorder(root->left);
        inorder(root->right);
    }
    void postorder(struct node*root)
    {
        if(root==NULL)
        {
            return ;
        }
        printf("%d ",root->left);
        inorder(root->right);
        inorder(root->data);
    }


int main()
{
    struct node *root=NULL;
    root=insert(root,11);
    insert(root,22);
    insert(root,39);
    insert(root,99);
    insert(root,80);
    printf("\nIn Order: ");
    inorder(root);
    printf("\nPre Order: ");
    preorder(root);
    printf("\nPost Order: ");
    postorder(root);
}
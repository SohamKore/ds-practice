#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;

};
struct node *create(){
    int data;
    printf("Enter the data to insert(-1 for null):");
    scanf("%d",&data);
     if(data==-1)
     {
        return 0;
     }
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=data;

     printf("Enter data to the left of the %d:\n",data);
     newnode->left= create();
     printf("Enter data to the right of %d\n:",data);
     newnode->right = create();

return newnode;
}
void preorder(struct node * root)
{
    if(root==0){
        return 0;
    }

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct node *root=NULL;

    root = create();
    printf("\npre:");
    preorder(root);
}


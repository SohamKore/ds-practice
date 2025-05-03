#include<stdio.h>
#include<stdlib.h>

    struct node{
        int data;
        struct node *left, *right;
    };


    struct node * create(){
        int data;
        printf("Enter data to insert(-1 for null):\n");
        scanf("%d", &data);

        if(data == -1){
            return 0;
        }
        struct node *newnode = (struct node *) malloc(sizeof(struct node));
        newnode->data = data;

        printf("Enter data left of the %d:\n", data);
        newnode->left = create();
        printf("Enter data right of the %d:\n", data);
        newnode->right = create();

        return newnode;
    }

    void preorder(struct node *root){

        if(root == 0){
            return;
        }

        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(struct node *root){

        if(root == 0){
            return;
        }

        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }

    void inorder(struct node *root){

        if(root == 0){
            return;
        }

        preorder(root->left);
        printf("%d ",root->data);
        preorder(root->right);
    }

    // preorder - root left right 
    // inorder - left root right 
    // postorder - left right root


int main(){
    struct node *root = NULL;

    root = create();
    printf("\npre: ");
    preorder(root);
    printf("\nin:");
    inorder(root);
    printf("\npost:");
    postorder(root);

    return 0;
}
#include<stdio.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *root = 0;

struct node *create(){
    struct node *newnode = (struct node *) malloc(sizeof(struct node));
    int input;
    printf("Enter data (-1 for Null):\n");
    scanf("%d", &input);
    if(input == -1){
        return 0;
    }
    newnode->data = input;
    printf("Enter left child 0f %d\n", input);
    newnode->left = create();
    printf("Enter right child 0f %d\n", input);
    newnode->right = create();

    return newnode;
}

void preOrder(struct node *root){
    if(root == 0){
        return;
    }

    printf("%d, ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root){
    if(root == 0){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    printf("%d, ", root->data);
}

void inOrder(struct node *root){
    if(root == 0){
        return;
    }

    inOrder(root->left);
    printf("%d, ", root->data);
    inOrder(root->right);
}


int main(){
    root = create();
    printf("\n\nprorder:\n");
    preOrder(root);
    printf("\n\ninorder:\n");
    inOrder(root);
    printf("\n\npostorder:\n");
    postOrder(root);




    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node * createNode(int data){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
}

struct node *insert(struct node *root, int data){
    if(root == 0){
        return createNode(data);
    }

    if(data > root->data){ 
        root->right = insert(root->right, data);
    } 
    if(data < root->data){
        root->left = insert(root->left, data);
    }

    return root;

}

void inorder(struct node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);

}
int main(){

    struct node *root = NULL;

    root = insert(root, 11);
    insert(root, 4);
    insert(root, 99);
    insert(root, 8);
    insert(root, 12);
    insert(root, 32);

    inorder(root);

    return 0;
}
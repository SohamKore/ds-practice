#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *top = NULL;

int insert(int val){
    if(head == NULL){
        struct node *newnode =(struct node *) malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;
        head = newnode;
        top = newnode;
    } else {
        struct node *newnode =(struct node *) malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;
        top->next = newnode;
        top = newnode;
    }
}

int display(struct node *ptr){
    while(ptr != NULL){
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL OCCURED!\n");            
}

int main(){
    insert(11);
    insert(22);
    insert(33);
    display(head);

    return 0;
}


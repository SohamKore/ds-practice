#include<stdio.h>
#define max 5
int stack[max];
int top = -1;

    int insert(int val){
        if(top > max - 1){
            printf("Stack Overflow!\n");
            return 0;
        } else {
            top++;
        }
        stack[top] = val;
    }

    int display(){
        if(top == -1){
            printf("Stack is empty!\n");
        } else {
            for(int i = top; i >= 0; i--){
                printf("Data = %d\n", stack[i]);
            }
        }
    } 

    int delete(){
        if(top < 0){
            printf("Stack Underflow!\n");
            return 0;
        } else {
            top--;
        }
}

int peek(){
    printf("Top Element = %d\n", stack[top]);
    return 0;
}

int isFull(){
    if(top >= max-1){
        printf("Stack is Full\n");
    } else {
        printf("Stack is not Full\n");

    }
}

int isEmpty(){
    if(top <= 0){
        printf("Stack is empty!\n");
    } else {
        printf("Stack is not empty!\n");
    }
}

int search(int val){
    for(int i = 0; i <= top; i++){
        if(val == stack[i]){
            printf("Index is %d\n", i);
        } 
    }
}

int reverse(){
    int temp;
    // i - 0
    for(int i = 0; i <= max/2; i++){
        temp = stack[i];
        stack[i] = stack[max-1-i];
        stack[max-1-i] = temp;
    }
}


int main(){
    int choice, value;

    while (choice != 9){        
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.isFull\n6.isEmpty\n7.Search\n8.Reverse\n9.Exit\n\nEnter your choice->");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter value to insert:\n");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                isFull();
                break;
            case 6:
                isEmpty();
                break;
            case 7:
                printf("Enter value to Search:\n");
                scanf("%d", &value);
                search(value);
                break;
            case 8:
                reverse();
                break;
            case 9:
                printf("Exiting...\n");
        }
}

    return 0;
}

// peek() - Print top element
// isFull() - Check if stack is full
// isEmpty() - Check if stack is empty
// search() - Search index of user input value in a stack
// reverse() - Reverse Stack


                                         
#include<stdio.h>

#define max 5
int dequeue[max];
int front = -1, rear = -1;

int insert_rear(int val)
{
    if((front == 0 && rear == max - 1) || (front == rear + 1))
    {
        printf("queue is full\n");
    }
    else if(front==-1 && rear == -1)
    {
        front = 0;
        rear=0;
        dequeue[rear]=val;
    }
    else if(rear == max-1)
    {
        rear = 0;
        dequeue[rear]=val;
    }
    else{
        rear++;
        dequeue[rear]=val;
    }
}

int insert_front(int val){
    if((front==0 && rear==max-1) || (front==rear+1)){
        printf("Overflow");    
    }    
    else if((front==-1) && (rear==-1)){
        front=rear=0;    
        dequeue[front]=val;    
    }    
    else if(front==0){
        front=max-1;    
        dequeue[front]=val;    
    }    
    else{
        front=front-1;    
        dequeue[front]=val;    
    }
}

int display()
{
    
    if(front== -1 && rear ==-1)
    {
        printf("Queue is empty\n");

    }
    else
    {
    printf("Deque elements are:\n");
    int i = front;
    while (1) {
        printf("%d\n", dequeue[i]);
        if (i == rear)
            break;
        i = (i + 1) % max;
    }
    printf("\n");
    }
}




int main(){

    insert_front(11);
    insert_front(22);
    insert_front(33);
    display();



    return 0;
}
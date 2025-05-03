#include<stdio.h>
#define max 5
int queue[max];
int front = -1, rear = -1;

int insert(int val){
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear] = val;
        return 0;
    } else if((rear + 1) % max == front){
        printf("Queue is full\n");
        return 0;
    } else {
        rear = (rear + 1) % max;
    printf("DEBUG!\n");

    }

    queue[rear] = val;

}
int display(){
    int temp = front;
    while(temp != rear){
        printf("Data = %d\n",queue[temp]);
        temp = (temp+1)%max;
    }
    printf("Data = %d\n",queue[temp]);
}

int delete(){
    if(front >= rear){
        
        printf("Queue is empty!\n");
        return -1;
    } else {
        front = (front + 1) % max;
    }
}

int main(){
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    delete();
    delete();
    insert(99);
    insert(88);
    insert(88);
    display();
}
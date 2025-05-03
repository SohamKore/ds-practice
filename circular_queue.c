#include<stdio.h>
# define max 5

queue[max];
int front = -1, rear = -1;

int insert(int val)
{
    if(front == -1 && rear == -1)
    {
        front = 0;
        rear= 0;
        queue[rear]=val;
        return 0;
    }
    else if ((rear+1) % max == front )
    {
        printf("Queue is full<<<\n");
        return -1;
    }
    else{
       rear= (rear + 1) % max;
        //printf("DEBUGG!!!\n");
    
    }
    queue[rear]=val;
    return 0;
}
int display()
{
   int temp = front;
   while(temp != rear){
    printf("Data = %d\n",queue[temp]);
    temp = (temp + 1)% max;
   }
   printf("Data = %d\n",queue[temp]);
}

int delete ()
{
   if(front >= rear)
   {
    printf("Queue is empty...\n");
    return -1;
   }
   else
   {
       front = (front + 1) % max;
    }
    
}

int largest(){
    int largest = queue[front];
    int temp = front;
    if(front >= rear){
     printf("Queue is empty...\n");
     return -1;
    } else {
    // printf("Init Largest = %d\n", largest);
    
    while(temp != rear){
        // printf("Data = %d\n",queue[temp]);
        if(queue[temp] > largest){
            largest = queue[temp];
            // printf("Largest number is %d\n", largest);
        }
        temp = (temp + 1)% max;
    }
    if(queue[temp] > largest){
        largest = queue[temp];
    }
    
}
printf("Largest number is %d\n", largest);
}

int reverse(){

    int temp = front;
    while(temp != rear){
    //  printf("Data = %d\n",queue[temp]);
     temp = (temp + 1)% max;
    }
    printf("Data = %d\n",queue[temp]);


}
int main()
{
    int choice, val;
    while(choice != 0)
    {
    printf("Enter your choice :\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf ("Enter a number to insert :\n");
        scanf("%d",&val);
        insert(val);
        break;

        case 2:
        display();
        break;

        case 3:
        delete();
        break;
        
        case 4:
        largest();
        break;
        

        default:
        printf ("Enter a valid case :");
        break;
    }
    }
    return 0;
}
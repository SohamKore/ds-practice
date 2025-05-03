#include<stdio.h>
#include<stdlib.h>
# define max 5

int queue[max];
int front = -1, rear = -1;
int insert(int val)
{
    if(rear>=max-1)
    {
        printf("Queue overflow\n");
        return -1;
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear]=val;
        return 0;
    }
    else{
        rear++;
    }
    queue[rear]=val;
}
int display()
{
    if(rear > max -1)
    {
        printf("Queue overflow\n");
        return 0;
    }
    else
    {
        for(int i=front ;i<=rear;i++)
        {
            printf("Data : %d\n",queue[i]);
        }
    }
}

int delete()
{
    if(front > rear)
    {
        printf("queue underflow\n");
        front = -1;
        rear =-1;
        return -1;
    }
    else
    {
        front ++;
    }
}

int search(int val)
{
    int flag = 0,i;
    if(front > rear)
    {
        printf("Queue underflow\n");
        return 0;
    }
    else
    {
        for(int i = front ;i<= rear;i++)
        {
        if(queue[i]==val){
          printf("The index value of entered number is %d\n",i);
          flag = 1;
        }
        }
    }
    if(flag == 0)
    {
        printf("Element not found >>>>>>>\n");
    }
    
}
int largest(){
    int largestValue = queue[0];
    if(front >= rear){
        printf("Queue is empty!\n");
        return -1;
    } else {
        for(int i =front; i <= rear;i++){
            if(queue[rear] > largestValue){
                largestValue = queue[rear];
            }
        }
    }
    printf("Largest value is %d\n", largestValue);
    return 0;
}

int reverse(){
    if(front>=rear){
        printf("Queue is empty\n");
    } else {
        int temp;
        for(int i = front; i <= rear/2; i++){
            temp = queue[i];
            queue[i] = queue[rear - i];
            queue[rear - i] = temp;
        }
    }
}

int peek(){
    
    if( front >= rear)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else{
       
         printf("The peek element is %d\n",queue[rear]);
        }
    return 0;
}

int main()
{
 int choice,val;
 while(choice != 0)
 {
    printf("\n1.Insert\n2.Display\n3.Delete\n4.Search\n5.Largest\n6.Reverse\n7.Peek\n\n");
    printf("Enter your choice :\n ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("Enter a value to insert :");
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
        printf("Enter a  value to search \n");
        scanf("%d",&val);
        search(val);
        break;

        case 5:
        largest();
        break;

        case 6:
        reverse();
        break;

        case 7:
        peek();
        break;

    }
 }    



}
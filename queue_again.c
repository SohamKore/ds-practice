#include<stdio.h>
#include<stdlib.h>
# define max 5

int front = -1, rear = -1;
int queue[max];
int insert(int val)
{
    if(rear >= max -1)
    {
        printf("Queue overflow>>>>>\n");
        return -1;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear]=val;
        return 0;
    }
    else
    {
        rear++;
    }
    queue[rear]= val;

    int display()
    {
      if(rear >= max -1 )
      {
        printf("Queue overflow>>>>>>\n");
        return -1;
      }
      else
      {
        for(int i = front ;i<=rear;i++)
        {
            printf("Data = %d\n",queue[i]);
        }
      }
 
    }
    int largest()
    {
        int largestvalue = queue[0];
        if(front >= rear)
        {
            printf("Queue is empty..\n");
            return -1;

        }
        else{
            for(int i=front ;i<=rear;i++)
            {
                if(queue[i]>largestvalue)
                largestvalue = queue[i];
            }
        }
        printf("The largest value is %d\n",largestvalue);
    }
    int delete()
    {
        if(front >= rear)
        {
            printf("Queue is empty....\n");
            front = -1;
            rear = -1;
            return 0;
        }
        else{
            front++;
        }
    }
    int search(int val)
    {
        
    }
    
}
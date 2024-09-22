#include<stdio.h>
#define max 5
int arr[max];
int front=-1;
int rear=-1;
void enqueue(int val)
{
    if(rear==max-1)
    {
        printf("overflow\n");
    }
    else{
        rear++;
        arr[rear]=val;
    }    
    if(front==-1)
    {
        front=0;
    }
}
int dequeue()
{
    if(front==-1||front>rear)
    {
        printf("underflow");
    }
    else{
        int ele=arr[front];
        front=front+1;
        return ele;
    }

}
int peek()
{
    return arr[rear];
}
void display()
{
    printf("elements are:");
    for(int i=0;i<max;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
}

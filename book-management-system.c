#include<stdio.h>
#define max 5
int arr[max];
int top=-1;
void push(int book)
{
    if(top==max-1)
    {
        printf("overflow\n");
    }
    else{
        top=top+1;
        arr[top]=book;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        printf("%d",arr[top]);
        top=top-1;
    }
}
int peek()
{
    if(top==-1)
    {
        printf("underflow");
        return -1;
    }
    return arr[top];
}
void display()
{
    int i;
    printf("\n books are:");
    for(i=0;i<max;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void main()
{ push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  display();
  
  pop();
  display();
}
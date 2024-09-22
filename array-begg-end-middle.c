#include<stdio.h>
void main()
{
    int i,size,item,pos;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements:");
    for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);  
    }
    printf("enter item at start:");
    scanf("%d",&item);
    for(i=size;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[0]=item;
    size++;
    printf("enter item at last:");
    scanf("%d",&item);
    size++;
    arr[size-1]=item;
    printf("enter position:");
    scanf("%d",&pos);
    printf("enter item at position");
    scanf("%d",&item);
    for(i=size-i;i>pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    size++;
    printf("elements are:");
    for(i=0;i<size;i++)
    {
      printf("%d\n",arr[i]);
    }
}
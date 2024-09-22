#include<stdio.h>
void tower(int n,char A,char B,char C)
{
    if(n<=0)
    {
        printf("Invalid entry");
    }
    else if(n==1)
    {
        printf("move disc from %c to %c\n",A,C);
    }
    else{
        tower(n-1,A,C,B);
        tower(1,A,B,C);
        tower(n-1,B,A,C);
    }

}
void main()
{
    int n;
    printf("enter no of disc:");
    scanf("%d",&n);
    printf("tower of henoic of %d disc is :\n",n);
    tower(n,'A','B','C');

}
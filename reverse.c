#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*newnode,*temp,*head=NULL,*prev,*forward;
void createnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
}
void reverse()
{
    struct node *prevnode=NULL,*currnode=head,*nextnode;
    while(currnode!=NULL)
    {
        nextnode=currnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;

    }
    head=prevnode;
}
void display()
{
    temp=head;
    printf("elements are:");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int ch;
    while (ch)
    {
        createnode();
        printf("enter choice (0/1):");
        scanf("%d",&ch);
    }
    display();
    reverse();
    display();
    

    
}
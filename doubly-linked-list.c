#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *newnode,*temp,*head=NULL;
int count=0;
void createnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    
}
void insert_at_begg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data at begg:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        
    }
}
void insert_at_end()
{
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data at end:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{ 
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }

}
void display()
{
    temp=head;
    printf("elements are:\n");
    while (temp->next!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d",temp->data);
   
    
}
void insert_at_middle()
{
    int pos,i=1;
    temp=head;
    printf("enter position:");
    scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data at middle:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(pos>count)
    {
        printf("invalid position");
    }
    else{
    while (i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    
    }    
    

}
void main()
{
    int ch;
    while (ch)
    {
        createnode();
        printf("enter choice:");
        scanf("%d",&ch);

    }
    display();
    insert_at_begg();
    display();
    insert_at_end();
    display();
    insert_at_middle();
    display();
    
}
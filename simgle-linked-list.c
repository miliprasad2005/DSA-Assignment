#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*newnode,*temp,*head=NULL,*prev,*forward;
int count=0;
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
    temp->next=head;
}
void insert_at_begg()
{
    struct node *tail=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data at begg:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    newnode->next=head;
    head=newnode;
    tail->next=head;
    
}
void insert_at_end()
{
    struct node *tail=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nenter data at end");
    scanf("%d",&newnode->data);
    newnode->next=head;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=newnode;
    newnode->next=head;
    
}
void display()
{
    temp=head;
    printf("\nelements are:");
    while(temp->next!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d",temp->data);
}
void inser_at_middle()
{  int pos,i=0;
    temp=head;
    printf("enter position:");
    scanf("%d",&pos);
    
    if(pos>count)
    {
        printf("invalid position");
    }
    
    else{
      while (i<pos)
      {
        temp=temp->next;
        i++; 
      }
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("\nenter data inserted at middle:");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      newnode->next=temp->next;
      temp->next=newnode;

      
      }
}
void delete_from_begg()
{   temp=head;
    if(head==NULL)
    {
        printf("underflow");
    }
    else{
        while (temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        head=temp->next;
        

    }
}
void delete_at_end()
{  
    struct node *prev;
     temp=head;
    if(head==NULL)
    {
        printf("underflow");
    }
    else{
        while (temp->next!=head)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        

    }
}
void delete_from_middle()
{   int pos,i=0;
    struct node *prev=NULL,*next,*curr=head;
    temp=head;
    printf("\nenter position:");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("invalid position");
    }
    else{
        while (i<pos)
        {
            next=curr->next;
            prev=curr;
            curr=next;
            i++;
        }
        prev->next=curr->next;

        
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
    
    delete_from_begg();
    display();
    delete_at_end();
    display();
    delete_from_middle();
    display();
   
}
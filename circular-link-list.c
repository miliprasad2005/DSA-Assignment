#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*temp,*head=NULL;
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
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    if(head==NULL)
    {
        newnode->next=head;
        head=newnode;

    }
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    newnode->next=head;
    head=newnode;
    tail->next=newnode;

    
    
}
void insert_at_end()
{
    struct node *tail=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    if(head==NULL)
    {
        newnode->next=head;
        head=newnode;

    }
    while (tail->next!=head)
    {
        tail=tail->next;
    }
    newnode->next=tail->next;
    tail->next=newnode;
    
}

void display()
{
    temp=head;
    printf("elements are:");
    while(temp->next!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d\n",temp->data);
}
void insert_at_specific()
{
    struct node *tail=head;
    int pos,i=1;
    printf("enter position:");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    if(pos>count)
    {
        printf("invalid position");
    }
    while (i<pos-1)
    {
        tail=tail->next;
        i++;
    }
    newnode->next=tail->next;
    tail->next=newnode;

}
void main()
{
    int ch;
    while(ch)
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
    insert_at_specific();
    display();
}
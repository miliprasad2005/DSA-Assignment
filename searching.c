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
void delete_from_begg()
{
    temp=head;
    head=head->next;
    free(temp);
}
void delete_from_end()
{
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;

    }
    if(temp==head)
    {
        head=NULL;
    }
    else{
        prev->next=NULL;
    }
    free(temp);

}
void delete_from_middle()
{
    int i=0,pos;
    temp=head;
    printf("enter position:");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    forward=temp->next;
    temp->next=forward->next;
    free(forward);

}
void search()
{
    int item;
    temp=head;
    printf("enter item to be searched:");
    scanf("%d",&item);
    while (temp!=NULL)
    {
        if(temp->data==item)
        {
            printf("success");
            break;
        }
        temp=temp->next;
    }
    if(temp->data!=item){
    printf("unsuccessful");
    }
    
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
    /*delete_from_begg();
    display();
    delete_from_end();
    display();
    delete_from_middle();
    display();*/
    search();

    
}
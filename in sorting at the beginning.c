#include"stdio.h"
#include"stdlib.h"
void insert();
void display();
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node *head=NULL;
    int data;
    printf("enter the data");
    do{
        scanf("%d",&data);
        if(data!=0)
            insert(&head,data);
    }while(data!=0);
    display(head);
}
void insert(struct node **head,int data)
{
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(*head!=NULL)
    {
        temp=*head;
        *head=newnode;
        newnode->next=temp;
    }
    else
    {
        *head=newnode;
    }
    
}
void display(struct node *address)
{
    while(address!=NULL)
    {
        printf("%d",address->data);
        address=address->next;
    }
}



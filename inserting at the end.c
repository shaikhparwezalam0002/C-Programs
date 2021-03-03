#include"stdio.h"
#include"stdlib.h"
void insert();
void print();
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head;
    int data;
    printf("enter the data");
    do{
        
        scanf("%d",&data);
        if(data!=0)
            insert(&head,data);
    }while(data!=0);
    print(head);
    return 0;
}
void insert(struct node**head,int data)
{
     struct node *temp,*newnode;
	 temp=*head;
	 newnode=(struct node *)malloc(sizeof(struct node));
	 newnode->data=data;
	 newnode->next=NULL;
	 if(*head==NULL)
	    *head=newnode;
	 else
	 { 
	 	while(temp->next!=NULL)
	 	temp=temp->next;
	 	temp->next=newnode;
	 }
}
void print(struct node *display)
{
    while(display!=NULL)
    {
        printf("%d\v",display->data);
        display=display->next;
    }
}

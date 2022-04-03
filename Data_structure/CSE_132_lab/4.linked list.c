#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;
struct node *start=NULL;

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

int main()
{
    int choice;
        default:
            printf("\nWrong Choice...!\n");
            break;


    return 0;
}
void create()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("List is full...!\n");
        exit(0);
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("Empty list...!\n");
        return;
    }
    else
    {
        ptr=start;
        printf("The List elements are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next ;
        }
    }
}
void insert_begin()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOverflow...!\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOverflow...!\n");
        return;
    }
    printf("Enter the data value for the node: ");
    scanf("%d",&temp->data );
    temp->next =NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next !=NULL)
        {
            ptr=ptr->next ;
        }
        ptr->next =temp;
    }
}
void insert_pos()
{
    struct node *ptr,*temp;
    int i,pos;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n!");
        return;
    }
    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d",&pos);
    printf("\nEnter the data value of the node: ");
    scanf("%d",&temp->data) ;

    temp->next=NULL;
    if(pos==0)
    {
        temp->next=start;
        start=temp;
    }
    else
    {
        for(i=0,ptr=start; i<pos-1; i++)
        {
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\nPosition not found....!!!\n");
                return;
            }
        }
        temp->next =ptr->next ;
        ptr->next=temp;
    }
}
void delete_begin()
{
    struct node *ptr;
    if(ptr==NULL)
    {
        printf("List is Empty...!\n");
        return;
    }
    else
    {
        ptr=start;
        start=start->next ;
        printf("The deleted element is: %d",ptr->data);
        free(ptr);
    }
}
void delete_end()
{
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("\nList is Empty....!\n");
        exit(0);
    }
    else if(start->next ==NULL)
    {
        ptr=start;
        start=NULL;
        printf("\nThe deleted element is: %d",ptr->data);
        free(ptr);
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\nThe deleted element is: %d",ptr->data);
        free(ptr);
    }
}
void delete_pos()
{
    int i,pos;
    struct node *temp,*ptr;
    if(start==NULL)
    {
        printf("\nThe list is empty...!\n");
        exit(0);
    }
    else
    {
        printf("Enter the position of the node to be deleted: ");
        scanf("%d",&pos);
        if(pos==0)
        {
            ptr=start;
            start=start->next ;
            printf("\nThe deleted element is:%d",ptr->data  );
            free(ptr);
        }
        else
        {
            ptr=start;
            for(i=0; i<pos; i++)
            {
                temp=ptr;
                ptr=ptr->next ;
                if(ptr==NULL)
                {
                    printf("\nPosition not Found....!\n");
                    return;
                }
            }
            temp->next =ptr->next ;
            printf("\nThe deleted element is:%d\n",ptr->data );
            free(ptr);
        }
    }
}

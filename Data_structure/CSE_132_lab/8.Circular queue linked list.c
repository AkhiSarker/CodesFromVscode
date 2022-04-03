#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node *head =0;
struct Node *tail =0;

void enqueue(int x)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> next = 0;

    if(head == 0 && tail == 0)
    {
        head = tail= newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void display()
{
    struct Node*temp;
    if(head == 0 && tail == 0)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        temp=head;
        while(temp!=0)
        {
            printf("Element: %d \n", temp->data);
            temp = temp->next;
        }
    }
}

void dequeue()
{
    struct Node*temp;
    temp=head;
    if(head == 0 && tail == 0)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        printf("Dequeue element is :%d",head->data);
        head = head->next;
        free(temp);
    }
}


void main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
}


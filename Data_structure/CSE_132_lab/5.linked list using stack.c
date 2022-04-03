#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node *top =NULL;

void push(int x)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> next = top;
    top = newNode ;
}


void display()
{
    struct Node*temp;
    temp = top;
    if(top == NULL)
    {
        printf("The stack is empty!\n");
    }
    else{
        while(temp!=NULL)
        {
            printf("Element on top: %d \n", temp->data);
            temp = temp->next;
        }
    }
}

void pop()
{
   struct Node*temp;
    temp = top;
    if(top == NULL)
    {
         printf("There is no node here.\n");
    }
    else{
        printf("Pop element is %d \n",top->data);
        top = top->next;
        free(temp);
    }
}

void main()
{

    push(2);
    push(3);
    push(10);
    display();

    pop();

}

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void createList(struct node **head, int n);
void display(struct node *head);
int  count(struct node *head);

int main()
{
    int n, choice;

    struct node *head = NULL;

    while(choice != 0)
    {
        printf("Please, select your choice:\n1. Create List\n2. Display list\n3. Count nodes\n0. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter total node to create: ");
                scanf("%d", &n);
                createList(&head, n);
                break;

            case 2:
                display(head);
                break;

            case 3:
                printf("Total nodes = %d\n", count(head));
                break;

            case 0:
                printf("Exiting....!!!\n");
                exit(0);
                break;

            default:
                printf("Error...! Invalid choice. Please choose valid option...!");
        }

        printf("\n");
    }

    return 0;
}


/**
 * Function to count total number of nodes in Circular Linked List
 */
int count(struct node *head)
{
    int total = 0;
    struct node *current = head;

    do
    {
        current = current->next;
        total++;
    } while (current != head);

    return total;
}


void createList(struct node **head, int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    prevNode = NULL;
    newNode  = NULL;


    for(i=1; i<=n; i++)
    {
        newNode = (struct node *) malloc(sizeof(struct node));

        printf("Enter data of %d node: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (prevNode != NULL)
            prevNode->next = newNode;

        prevNode = newNode;
        if (*head == NULL)
            *head = newNode;
    }
    prevNode->next = *head;

    printf("\nCircular queue created successfully...!\n");
}

void display(struct node *head)
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
        return;
    }


    current = head;
    printf("DATA IN THE LIST:\n");

    do
    {
        printf("Data %d = %d\n", n++, current->data);

        current = current->next;
    } while (current != head);
}

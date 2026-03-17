#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    if(front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Element inserted\n");
}

void dequeue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        temp = front;
        printf("Deleted element = %d\n",temp->data);
        front = front->next;
        free(temp);

        if(front == NULL)
        {
            rear = NULL;
        }
    }
}

void display()
{
    struct node *temp;

    temp = front;

    if(temp == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d -> ",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. INQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: enqueue();
                    break;

            case 2: dequeue();
                    break;

            case 3: display();
                    break;

            case 4: printf("Exiting...");
                    break;

            default: printf("Invalid choice");
        }

    }while(choice != 4);
    printf("\nLabNo: 14, Name: Chandan Vomjan, Roll No: 081/96, Section: C\n");

    return 0;
}
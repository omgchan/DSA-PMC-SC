#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d",&newnode->data);

    newnode->next = top;
    top = newnode;

    printf("Element inserted\n");
}

void pop()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        temp = top;
        printf("Deleted element = %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}
void peek() {
    struct node *temp;
    if(top == NULL) {
        printf("Stack is empty\n");
    }
    else {
        temp = top;
        printf("Top element = %d\n", temp->data);
    }
}

void display()
{
    struct node *temp;

    temp = top;

    if(temp == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
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
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();
                    break;

            case 2: pop();
                    break;

            case 3: display();
                    break;

            case 4: printf("Exiting...");
                    break;

            default: printf("Invalid choice");
        }

    }while(choice != 4);
    printf("\nLabNo: 13, Name: Chandan Vomjan, Roll No: 081/96, Section: C\n");

    return 0;
}
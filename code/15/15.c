#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;

void insert() {
    struct node* newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    }
    else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;

    }
    printf("Node inserted successfully\n");
}
void delete() {
    struct node* temp;
    if(head == NULL) {
        printf("List is empty\n");
    }
    else {
        printf("Node %d deleted successfully\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}

void display() {
    struct node* temp;
    if(head == NULL) {
        printf("List is empty\n");
    }
    else {
        temp = head;
        while ( temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int choice;
    do {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);


    printf("\nLab No: 15, Name: Chandan Vomjan, Roll No: 081/96, Section: C");

    return 0;
}
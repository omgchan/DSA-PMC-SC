#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;


void enqueue() {

    if(rear == MAX -1 ) {
        printf("Queue oveflow\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    printf("Enter the element to be enqueued: ");
    scanf("%d", &queue[rear]);
    printf("Element enqueued: %d\n", queue[rear]);

}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front]);
    front++;

}


int main() {
    int choice;
    printf("Queue operations:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);

    printf("\nLab No: 4, Name: Chandan Vomjan, Roll No: 081/96, Section: C");

    return 0;
}

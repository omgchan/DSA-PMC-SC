#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    if(top == MAX-1) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    printf("Enter the element to be pushed: ");
    scanf("%d", &stack[top]);
}
void pop() {
    if(top == -1) {
        printf("stack underflow\n");
        return;
    }
    printf("Popped element: %d\n", stack[top]);
    top--;
}

int main() {
    int choice;
    printf("Stack operations:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Exit\n");

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);

    printf("\nLab No: 3, Name: Chandan Vomjan, Roll No: 081/96, Section: C");
    return 0;   
}
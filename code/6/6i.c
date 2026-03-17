#include<stdio.h>

int main() {
    int n, item;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the elements:\n");
        scanf("%d", &arr[i]);
    }
    printf("Enter item to be searched: ");
    scanf("%d", &item);
    int found = 0;
    
    for (int i =0; i<n; i++) {
        if(arr[i] == item) {
            found = 1;
            printf("Item found at position %d\n", i+1);
            break;
        }
    
    }
    if (!found) {
        printf("Item not found\n");
    }

    printf("\nLab No: 6(i), Name: Chandan Vomjan, Roll No: 081/96, Section: C");

    return 0;
}

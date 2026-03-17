#include<stdio.h>

int main() {
    int arr[100], n, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorting using selection sort...\n");

    for (int i = 0; i<n-1; i++) {
        min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;

    }
    printf("Sorted array: ");
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nLab No: 9, Name: Chandan Vomjan, Roll No: 081/96, Section: C");
    return 0;
}
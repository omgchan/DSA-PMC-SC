#include<stdio.h>

int main() {
    int arr[100], n, i=0, j=0, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sorting using bubble sort...\n");
    for(i=0; i<n-1; i++) {
        for(j=0;j<n-i-1; j++){
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nLab No: 8, Name: Chandan Vomjan, Roll No: 081/96, Section: C");
    return 0;
}
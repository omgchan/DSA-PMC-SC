#include<stdio.h>

int main() {
    int arr[100], n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sorting using insertion sort...\n");
    for(int i = 1; i<n; i++) {
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Sorted array: ");
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nLab No: 10, Name: Chandan Vomjan, Roll No: 081/96, Section: C");
    return 0;

}
#include<stdio.h>

int main() {
    int arr[100], key, n, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    int found = 0;
    int low = 0, high = n-1;
    while (low<=high) {
        mid = (low + high) /2;
        if(arr[mid] == key) {
            found = 1;
            printf("Key found at position %d\n", mid+1);
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Key not found\n");
    }

    printf("\nLab No: 6(ii), Name: Chandan Vomjan, Roll No: 081/96, Section: C");


    return 0;

}
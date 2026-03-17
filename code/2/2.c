#include<stdio.h>

int fact(int n) {
    if (n==1 || n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main() {
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    int result = fact(n);
    printf("Result: Factorial of %d is %d", n, result);

    printf("\nLab No: 2, Name: Chandan Vomjan, Roll No: 081/96, Section: C");

    return 0;

}  
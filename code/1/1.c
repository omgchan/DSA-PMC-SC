#include <stdio.h>

int main()
{
    int m,n,i,j;
    int A[50][50];

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);

    printf("Enter matrix elements:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nNon-zero elements with location:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]!=0)
            {
                printf("Value %d at position (%d,%d)\n",A[i][j],i,j);
            }
        }
    }
    printf("\nLab No: 1, Name: Chandan Vomjan, Roll No: 081/96, Section: C");

    return 0;
}
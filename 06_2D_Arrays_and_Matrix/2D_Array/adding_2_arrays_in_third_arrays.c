#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of column:");
    scanf("%d", &c);
    int a[r][c], b[r][c], C[r][c];
    printf("Enter the array elements of a:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of array b:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            C[i][j]=0;
            C[i][j] = a[i][j] * b[i][j];
        }
    }
    printf("The arrray elements in C:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", C[i][j]);
        }
        printf("\n");0
    }

    return 0;
}
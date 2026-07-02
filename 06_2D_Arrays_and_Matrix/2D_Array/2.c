#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter the size of row:");
    scanf("%d", &n);
    printf("Enter the size of column:");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Row-wise:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("%d ", a[i][j]);
        }
    }

    printf("\n");

    printf("Column-wise:");

    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {

            printf("%d ", a[i][j]);
        }

        // printf("\n");
    }

    return 0;
}
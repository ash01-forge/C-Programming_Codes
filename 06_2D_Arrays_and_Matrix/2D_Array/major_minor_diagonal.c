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
    printf("Major Diagonal:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j)
            {

                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");

    printf("Minor Diagonal:");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i+j==n-1)
            {

                printf("%d ", a[i][j]);
            }
        }

        // printf("\n");
    }

    return 0;
}
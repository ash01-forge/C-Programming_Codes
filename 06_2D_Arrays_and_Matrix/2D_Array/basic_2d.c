#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of m and n:");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the array elemeents:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row-Wise:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]);
        }
    }

    printf("\n");
    printf("Column-Wise:");
    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < m; i++)
        {
            printf(" %d", arr[i][j]);
        }
    }

    return 0;
}
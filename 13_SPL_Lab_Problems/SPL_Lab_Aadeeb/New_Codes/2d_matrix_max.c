#include <stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter the size of row:");
    scanf("%d", &n);

    printf("Enter the size of column:");
    scanf("%d", &m);
    int a[m][n];
    printf("Enter the array elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0], max_col = 0, max_row = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                max_col = j;
                max_row = i;
            }
        }
    }
    printf("Max:%d\nLocation: [%d][%d]", max, max_row, max_col);

    return 0;
}
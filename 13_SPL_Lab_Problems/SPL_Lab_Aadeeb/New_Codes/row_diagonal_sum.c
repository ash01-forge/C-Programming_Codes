#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Please enter an odd number!!");
    }
    int a[n][n], sum = 0;
    printf("Entert the array elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1||i == j || i + j == n - 1)
            {
                sum = sum + a[i][j];
            }
           
        }
    }
    printf("Sum=%d", sum);

    return 0;
}
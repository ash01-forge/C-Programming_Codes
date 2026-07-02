#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int mid = (n / 2) + 1;
    int nsp = 1, nst = n - 1;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }

        nsp += 2;
        nst--;
        printf("\n");
    }

    return 0;
}
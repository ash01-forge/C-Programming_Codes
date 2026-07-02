#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i-1; j++)
        {
            if (i % 2 == 0)
            {
                printf("$ ");
            }
            if (i % 2 != 0)
            {
                printf("# ");
            }
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("() ");
        }
        for (int h = i; h <= n; h++)
        {

            if (i % 2 == 0)
            {
                printf("$ ");
            }
            if (i % 2 != 0)
            {
                printf("# ");
            }
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("_");
        }
        for (j = i; j <= n; j++)
        {
            if (i == j)
            {
                printf("%d", i);
            }
        }
        for ( j = 1; j <= 2*i-2; j++)
        {
            printf("_");
        }
        for ( j = 1; j <= n; j++)
        {
            if(i==j)
            {
            printf("%c",i+64);
            }
        }
        
        
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n, i, a = 1, j;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
           if ((i+j)%2==0)
           {
            printf("1");
           }
           else
           {
            printf("0");
           }
           
            
        }

        printf("\n");
    }

    return 0;
}
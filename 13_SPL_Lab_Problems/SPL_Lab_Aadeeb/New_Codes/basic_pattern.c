#include <stdio.h>
int main()
{
    int i, j, n, a;
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        a=n;

        /*for (j = 1; j <= n-i ; j++)
        {
            printf("_");
        }*/

        for (int k = i; k <=n ; k++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}
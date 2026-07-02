#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        /*for (int k = 1; k <= n-i; k++)
        {
             printf("_");
        }*/
        for ( j =n; j >= i; j--)
        {
            printf("%d",j);
        }
        
        
    
    printf("\n");
    }

    return 0;
}
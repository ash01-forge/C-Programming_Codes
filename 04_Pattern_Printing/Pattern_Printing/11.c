#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        for ( j = 1; j <=i; j++)
        {
            printf("%d",j);
        }
        int a,h;
        a=i-1;
        for ( h = 1; h <= i-1; h++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
        
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,k,p,n;
    printf("Enter the row:");
    scanf("%d",&n);
    for ( i = 1; i <=n-1; i++)
    {

        for ( j = 1; j <=n-1; j++)
    {
        printf(" ");
    }
    }
    for ( k = 1; k <=i; k++)
    {
        printf("%d ",k);
    }
    for ( p = 1; p >=i+1; p--)
    {
        printf("%d ",p);
    }
    return 0;
}
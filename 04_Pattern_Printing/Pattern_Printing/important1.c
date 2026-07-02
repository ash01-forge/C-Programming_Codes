#include<stdio.h>
int main()
{
    int i,n,j;
printf("Enter the  number of rows:");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    for ( j = 1; j <=n-i; j++)
    {
        printf(" ");
    }
    for (int k = i; k<=n; k++)
    {
        printf("%d",k);
    }
    printf("\n");
    
}

    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    //printf("\nEnter the number of columns:");
    //scanf("%d",&m);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if (i==1||j==1||i==n||j==n)
            {
            printf("* ");
            }
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
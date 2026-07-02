#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <=n; j++)
        {
            if (i==1||i==n||i==(n/2)+1||j==1||j==n)
            {
                printf("*");
            }
            else 
            {
                printf("_");
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}
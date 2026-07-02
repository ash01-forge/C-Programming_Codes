#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of row and column:");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the array elements:");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i==j)
            {
                a[i][j]=1;
            }
           else 
            {
                a[i][j]=0;
            }
            
            
        }
        
    }
    printf("The array elements are:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}
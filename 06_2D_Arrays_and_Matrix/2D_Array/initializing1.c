#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the size of rows:");
    scanf("%d",&r);

    printf("Enter the size of column:");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the array elements:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
           scanf("%d",&a[i][j]);
        }
        
    }
    printf("The array elements are:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
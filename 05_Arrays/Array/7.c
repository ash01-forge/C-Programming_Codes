#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the array[%d]",i);
        scanf("%d",&arr[i]);
    }
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
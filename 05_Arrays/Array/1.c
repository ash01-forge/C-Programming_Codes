#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the terms:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array elements:\n");
    for ( i = n-1; i>=0; i--)
    {
       printf("%d ",arr[i]);
    }
    

    
    return 0;
}
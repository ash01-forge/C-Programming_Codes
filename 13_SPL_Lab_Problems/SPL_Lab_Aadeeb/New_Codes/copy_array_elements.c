#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of  array:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the array elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements in array 2 are as follows:\n");
    for ( i = 0; i < n; i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
    
    return 0;
}
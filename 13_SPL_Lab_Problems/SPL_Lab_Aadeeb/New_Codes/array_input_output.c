#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of  array:");
    scanf("%d",&n);
    int a[n],sum=0;
    printf("Enter the array elements:\n");

    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]); 
    }
   // printf("You entered the following array elements:\n");
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
        //printf("%d ",sum);
    }
    printf("sum=%d ",sum);
    return 0;
}
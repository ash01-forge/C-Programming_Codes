#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Arr[%d]=",i);
        scanf("%d",&arr[i]);
        
    }
    int max=arr[0],min=arr[0];
    int maxIn=0,minIn=0;
    for ( i =1 ; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            maxIn=i;
        }
        if (arr[i]<min)
        {
            min=arr[i];
            minIn=i;
        }
        
    }
    printf("Max:%d, Index:%d\n",max,maxIn);
    printf("Min:%d, Index:%d",min,minIn);
    
    
}
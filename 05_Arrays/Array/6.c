#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int arr[n],key,flag=0;
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value for Arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key:");
    scanf("%d",&key);
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==key)
        flag=1;
    }
    if(flag==1)
    printf("Found\n");
    else
    printf("Not Found\n");
    

    
    
    return 0;
}
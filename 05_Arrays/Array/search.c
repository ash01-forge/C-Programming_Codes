#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the Array Size:");
    scanf("%d",&n);
    int a[n],key,flag=0;
    for ( i = 0; i <n; i++)
    {
        printf("Enter Arr[%d]=",i);
        scanf("%d",&a[i]);

    }
    printf("Enter the search key:");
    scanf("%d",&key);
    for ( j = 0; j <n; j++)
    {
      
       if (a[j]==key)
       {
        flag=1;
        break;
       }
       else flag=0;
    }
    if (flag==1)
    {
        printf("Found");
    }
    else printf("Not Found");
    
    
    
    return 0;
}
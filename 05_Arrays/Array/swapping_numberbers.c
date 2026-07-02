#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
    int mid=(n/2-1)+1;
    int temp,start=0,end=mid-1;
    int temp1,start1=mid,end1=mid-1;
    while(start<end)
        {
            temp=a[end];
            a[end]=a[start];
            a[start]=temp;
        
        start++;
        end--;
    }
   while(start1<end1)
        {
            temp1=a[end1];
            a[end1]=a[start1];
            a[start1]=temp1;
        
        start1++;
        end1--;
    }
    for ( i = 0; i < n; i++)
    {
        printf("Array elements:%d\n",a[i]);
    }
    
    
    return 0;
}
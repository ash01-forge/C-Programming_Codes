#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of  array:");
    scanf("%d",&n);
    int a[n],flag=1;
    printf("Input:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    
    
    
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,h,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n],k,b;
    for ( i = 0; i < n; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);

    }
    printf("Enter the value for k:");
    scanf("%d",&k);
    for ( j = 0; j < n; j++)
    {
        if (j%2==0)
        {
            a[j]=a[j]+k;

        }
        if (j%2!=0)
        {
     
            a[j]=a[j]-k;
        }

        
    }
    for ( h = 0; h < n; h++)
    {
        printf("A[%d]=%d",h,a[h]);
        printf("\n");
    }
    
    
    
    

    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]<500)
        {
        for ( j = i; j < n-1; j++)
        {
       
            a[j]=a[j+1];
        }
        n--;
        i--;
    }
  
}

        for ( i = 0; i < n; i++)
        {
            printf("Array a[%d]=%d",i,a[i]);
            printf("\n");
        }
        
   
    
    
    return 0;
}
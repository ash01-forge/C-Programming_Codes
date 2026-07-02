#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array inputs:");
    for ( i = 0; i < n; i++)
    {
      
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);  
    
        if (i!=n-1)
        {
            printf(",");
        }
        
        
    }
    
    printf("\n");
    for ( i = n-1; i >= 0; i--)
    {
          
        printf("%d",a[i]);
        if (i!=0)
        {
            printf(",");
        }
        
       
    }
    
    return 0;
}
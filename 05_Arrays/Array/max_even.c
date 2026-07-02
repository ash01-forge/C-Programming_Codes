#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a number less than 10:");
    scanf("%d",&n);
    int a[n],max,index;
    for ( i = 0; i < n; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
    if (a[i]%2==0)
      {
        max=a[i];
        index=i;
      }
      break;
    }
      
  
    
    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
         
        
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }

    }
    
    printf("Even max number=%d\nIndex=%d",max,index);
    
    
    return 0;
}
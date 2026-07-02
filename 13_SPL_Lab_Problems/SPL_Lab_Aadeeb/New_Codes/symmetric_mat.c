#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the aarraay elements:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int tr[n][n],flag=0;
     for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            tr[j][i]=a[i][j];
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
    if (a[i][j]!=tr[j][i])
    {
       flag=1;
       break;
    }
    else 
    {
        flag=0;
    }
}
    }
    if (flag==0)
    {
        printf("Yes");
    }
    else{
    printf("No");
    }

    
   
    

    
    return 0;
}
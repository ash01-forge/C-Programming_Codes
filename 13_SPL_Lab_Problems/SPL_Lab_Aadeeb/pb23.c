#include<stdio.h>
int main()
{
    int i,a,n;
    printf("Enter the nth Term:\n");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        a=a+2;
        if (i<n)
        {
            printf(",");
        }
        
    }
    return 0;
}
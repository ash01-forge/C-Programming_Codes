#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the nth Term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        sum=sum + i;
        if (i<n)
        {
            printf(",");
        }
        
    }
    printf("\nsum=%d",sum);
    return 0;
}
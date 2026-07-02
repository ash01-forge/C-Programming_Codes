#include<stdio.h>
int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    printf("%d!=",n);
    for ( i = n; i >= 1; i--)
    {
        printf("%d",i);
        a=a*i;
        if (i>1)
        {
            printf("X");
        }
        
    }
    printf("=%d",n,a);
    
    return 0;
}
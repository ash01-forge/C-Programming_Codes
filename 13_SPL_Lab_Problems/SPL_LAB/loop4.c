#include<stdio.h>
int main()
{
    int i,a,n;
    printf("Enter the term:");
    scanf("%d",&n);
    a=3;
    for(i=3;i<=n;i++)
        {printf("%d ",a);
    a=a*4;
        }
    return 0;
}

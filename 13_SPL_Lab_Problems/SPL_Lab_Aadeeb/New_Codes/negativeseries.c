#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the nth term:");
    scanf("%d",&n);
    a=1;
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            a=a*-1;
        }
        
    }
    printf("The series:%d",a);
    
    return 0;
}
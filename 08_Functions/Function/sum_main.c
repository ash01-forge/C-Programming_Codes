#include <stdio.h>
int sum(int m, int a[m])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i])
        sum=sum+a[i];
    }
    
    printf("Sum in Function:%d", s);
    return s;
}
int main()
{
    int a, b;
    printf("Enter the value of a nad b:");
    scanf("%d %d", &a, &b);
    sum(a, b);
    printf("Sum in Main:%d",a+b);
    return 0;
}
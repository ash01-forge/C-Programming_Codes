#include<stdio.h>
int main()
{
    int i,n;
    double num,sum;
    printf("Enter the terms of Number:\n");
    scanf("%d",&n);
    sum=0;
    for (i=1;i<=n;i++)
    {
        printf("Enter The Number %d:\n",i);
        scanf("%lf",&num);
        sum=sum+num;
    }
    printf("The average of the %d number is:%.2lf",n,sum);
    
    return 0;
}
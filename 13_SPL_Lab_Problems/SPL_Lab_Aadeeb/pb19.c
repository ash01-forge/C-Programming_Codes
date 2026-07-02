#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter the nth term you want to print:\n");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {
    sum=sum+pow(i,2);    
    
    }
    printf("Sum=%d",sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the nth term you want to print:\n");
    scanf("%d",&n);
    int sum=0;
    for(i=1,j=2;i<=n;i++,j++)
    {
            sum=sum+(i*i)*j;
        
       
    
    }
    printf("Sum=%d",sum);
    return 0;
}
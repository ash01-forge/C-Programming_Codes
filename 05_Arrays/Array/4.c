#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the terms:\n");
    scanf("%d",&n);
    float arr[n],sum=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    /*for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }*/
    printf("%.2f",sum/n);
    
    
    return 0;
}
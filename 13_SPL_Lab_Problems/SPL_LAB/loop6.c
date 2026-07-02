#include<stdio.h>
int main()
{
    int i,n;
    float a;
    printf("Enter the nth Term:\n");
    scanf("%d",&n);
    a=100;
    for(i=1;i<=n;i++){
        printf("%.1f ",a);
        a=a*.5;
    }
    return 0;
}

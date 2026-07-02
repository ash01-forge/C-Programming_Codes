#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the nth term:\n");
    scanf("%d",&n);
    for(i=4;i<=3*n+2;i=i+3)
        printf("%d ",i);
    return 0;
}

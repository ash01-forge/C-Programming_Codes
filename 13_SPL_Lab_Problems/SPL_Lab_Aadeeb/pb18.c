#include<stdio.h>
int main()
{
    int i,a,n;
    printf("Enter the table you want to print:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a=i*n;
        printf("%dX%d=%d\n",i,n,a);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter the value of a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("The sum=%d", sum);
    return 0;
}
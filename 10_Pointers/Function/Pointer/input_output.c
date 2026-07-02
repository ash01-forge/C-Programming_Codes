#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    int *p, *q;
    p = &a;
    q = &b;
    //int res=*p+*q;
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("%d %d",*p,*q);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=20;
    c=30;
    printf("Before Swap: A=%d,B=%d,C=%d\n",a,b,c);
    int temp=a;
    a=c;
    c=b;
    b=temp;
    printf("After Swap: A=%d,B=%d,C=%d",a,b,c);
    return 0;
}

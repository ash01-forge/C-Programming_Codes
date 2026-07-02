#include<stdio.h>
int main()
{
    int a,b,c,d,res;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    scanf("%dn",&d);


    /*a=21;
    b=15;
    c=34;
    d=6;*/

    res=(a*b+(a-c)/d)+b;
    printf("%d*%d+(%d-%d)/%d+%d=%d",a,b,a,c,d,b,res);
}

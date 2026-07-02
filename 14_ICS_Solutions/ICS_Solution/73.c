#include<stdio.h>
int main()
{
    int x,b;
    double res;
    scanf("%d",&x);
    scanf("%d",&b);
    res=log(x)/log(b);
    printf("result=%.4lf",res);
    return 0;
}

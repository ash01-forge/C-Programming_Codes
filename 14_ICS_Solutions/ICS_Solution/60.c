#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double r,v,a;
    scanf("%lf",&r);
    v=(4.0/3)*pi*pow(r,3);
    a=4*pi*pow(r,2);
    printf("Volume=%.2lf,Area=%.2lf",v,a);
    return 0;
}

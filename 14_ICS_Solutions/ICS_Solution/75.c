#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double rad,deg,rad1;
    scanf("%lf",&rad);
    rad1=asin(rad);
    deg=(rad1*180)/pi;
    printf("x in degrees=%.2lf",deg);


return 0;
}

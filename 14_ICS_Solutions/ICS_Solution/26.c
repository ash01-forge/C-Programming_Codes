#include<stdio.h>
#include<math.h>
int main()
{
    double a,sine,cose,tangent;
    scanf("%lf",&a);
    sine=sin(a);
    cose=cos(a);
    tangent=tan(a);
    printf("Sine=%.2lf\nCosine=%.2lf\nTangent=%.2lf",sine,cose,tangent);
    return 0;
}

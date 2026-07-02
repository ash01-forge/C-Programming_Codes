#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double u,theta,thetarad,g,H;
    scanf("%lf",&u);
    scanf("%lf",&theta);
    scanf("%lf",&g);
    thetarad=(theta*pi)/180;
    H=(u*u*(pow(sin(thetarad),2)))/(2*g);
    printf("Height=%.2lf m\n",H);
    return 0;
}

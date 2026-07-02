#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,res1,res2;
    scanf("%lf %lf %lf",&a,&b,&c);
    res1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    res2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("%lf\n%lf",res1,res2);
    return 0;
}

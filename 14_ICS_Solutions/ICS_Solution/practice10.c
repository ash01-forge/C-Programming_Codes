#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter the value of a:");
    scanf("%lf",&a);
    printf("Enter the value of b:");
    scanf("%lf",&b);
    printf("Enter the value of c:");
    scanf("%lf",&c);
    double res1,res2;
    res1=-b+sqrt(pow(b,2)-4*a*c)/2*a;
    res2=-b-sqrt(pow(b,2)-4*a*c)/2*a;
    printf("x1=%lf",res1);
    printf("x2=%lf",res2);
    return 0;
}

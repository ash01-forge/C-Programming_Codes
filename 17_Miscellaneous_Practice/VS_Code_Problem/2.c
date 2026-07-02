#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,res1,res2;
    printf("Enter the inputs a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    res1=(b+sqrt(pow(b,2)-(4*a*c)))/2*a;
    res2=(b-sqrt(pow(b,2)-(4*a*c)))/2*a;
printf("X1=%.6lf\nX2=%.5lf\n",res1,res2);
    return 0;
}
#include<stdio.h>
int main()
{
    float a,b,c,d,res;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    scanf("%f",&d);
    /*a=2.3 b=5.8 c=1.1 d=3.5*/
    res=(a+b-c)*d-a/d;
    printf("(%.1f+%.1f-%.1f)*%.1f-%.1f/%.1bf=%.6f",a,b,c,d,a,d,res);
    return 0;
}

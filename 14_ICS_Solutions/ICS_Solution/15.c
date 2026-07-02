#include<stdio.h>
int main()
{
    float a,b,sum,diff,mul,div;
   scanf("%f\n",&a);
   scanf("%f",&b);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    printf("%.3f+%.3f=%.3f\n",a,b,sum);
    printf("%.3f-%.3f=%.3f\n",a,b,diff);
    printf("%.3f*%.3f=%.6f\n",a,b,mul);
    printf("%.3f/%.3f=%.6f\n",a,b,div);


    return 0;
}

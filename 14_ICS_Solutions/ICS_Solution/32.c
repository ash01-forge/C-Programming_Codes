#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,s,d,m;
    scanf("%lf %lf",&a,&b);
    s=a+b;
    d=a-b;
    m=a*b;

    int div,rem;
    div=(int)a/(int)b;
    rem=a%(int)b;
    printf("Addition:%.1lf\nSubtraction:%.1lf\nMultiplication:%.1lf\nQuotient:%d\nRemainder:%d\n",s,d,m,div,rem);
    return 0;
}

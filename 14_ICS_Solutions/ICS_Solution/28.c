#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    x1=(-b+sqrt((pow(b,2)-4*a*c)))/2*a;
    x2=(-b-sqrt((pow(b,2)-4*a*c)))/2*a;\
    printf("x1=%.2f\nx2=%.2f",x1,x2);
    return 0;
}

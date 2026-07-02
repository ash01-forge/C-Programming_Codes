#include<stdio.h>
#include<math.h>
int main()
{
    double x,Xo,t,y,w;
    scanf("%lf",&Xo);
     scanf("%lf",&t);
      scanf("%lf",&y);
        scanf("%lf",&w);
        x=Xo*(exp(-y*t))*(cos(w*t));
        printf("x=%.5lf",x);
        return 0;

}

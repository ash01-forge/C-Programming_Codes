#include <stdio.h>
#include <math.h>

int main() {
    double t,t1,Rt,lambda;
    scanf("%lf",&t);
     scanf("%lf",&Rt);

    t1=t*3600;
    lambda = -log(Rt)/t1;

    printf("The value of lambda is: %e\n", lambda);

    return 0;
}

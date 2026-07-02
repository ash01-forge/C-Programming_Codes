#include<stdio.h>
#include<math.h>
int main()
{
    int a,b ;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    double res,finalres;
    res=pow(a,4)+2*a*b-pow(b,3);
    finalres=sqrt(res);
    printf("value:%.2lf",finalres);
    return 0;
}



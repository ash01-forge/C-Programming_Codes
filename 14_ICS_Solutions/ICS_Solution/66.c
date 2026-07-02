#include<stdio.h>
int main()
{
    char c;
    double a,b,area,peri;
    scanf(" %c",&c);
    scanf("%lf",&a);
    scanf("%lf",&b);
    if (c=='A'){
        area=a*b;
        printf("The area of rectangle is:%.6lf",area);
    }
    else if (c=='P'){
        peri=2*(a+b);
        printf("The perimeter of the rectangle is:%.6lf",peri);
    }
    else {
        printf("please input valid character");
    }
    return 0;
}

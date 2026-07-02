#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, c;
    double S, area;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    S = (a + b + c) / 2.0;
    area = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("The area of the triangle is: %lf\n", area);
    return 0;
}

#include <stdio.h>
#include <math.h>
int power(int n, int m)
{
    int c;
    c = pow(n, m);
    printf("%d to the power %d is %d", n, m, c);
    return c;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    power(a,b);
    return 0;
}
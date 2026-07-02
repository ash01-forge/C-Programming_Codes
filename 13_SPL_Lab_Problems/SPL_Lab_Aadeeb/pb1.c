#include<stdio.h>
int main()
{
    double a;
    printf("Enter the number:\n");
    scanf("%lf",&a);
    if(a>=0)
        printf("Positive");
    else printf("Negative");
    return 0;
}

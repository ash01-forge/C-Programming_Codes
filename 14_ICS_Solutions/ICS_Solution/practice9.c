#include<stdio.h>
int main()
{
    int a,b,area,perimeter;
    printf("Enter the value of length:");
    scanf("%d",&a);
    printf("Enter the value of width:");
    scanf("%d",&b);
    area=(a*b);
    perimeter=2*(a+b);
    printf("Area:%d\n",area);
    printf("Perimeter:%d\n",perimeter);
    return 0;

}

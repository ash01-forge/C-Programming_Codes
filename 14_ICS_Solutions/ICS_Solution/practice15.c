#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Height:");
    scanf("%d",&a);
    printf("Enter the Width :");
    scanf("%d",&b);
    int s,p;
    s=2*(a+b);
    p=a*b;
    printf("Perimeter of the rectangle=%d\n",s);
    printf("Area of the rectangle=%d",p);
    return 0;
}

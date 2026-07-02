#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    float pi=3.1416;
    printf("Enter the value of the radius of the circle:");
    scanf("%d",&r);
    double area;
    area=pi*pow(r,2);
    printf("Area of the circle:%lf",area);
    return 0;
    //Area of the circle
}



#include<stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d",&a);
    scanf("%f",&b);
    int ai=b;
    float af=a;
    int ci=(int)b;
    float cf=(float)a;

    printf("Assignment:%f assigned to an int produces %d\n",b,ai);
    printf("Assignment:%d assigned to a float produces %f\n",a,af);
    a=(float)a;
    b=(int)b;
    printf("Type Casting:(float)%d produces %f\n",a,cf);
     printf("Type Casting:(int)%f produces %d",b,ci);




    return 0;
}

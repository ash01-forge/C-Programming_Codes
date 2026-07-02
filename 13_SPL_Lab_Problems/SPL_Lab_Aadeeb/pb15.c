#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    float x1,x2,dis=pow(b,2)-(4*a*c);
    if (dis==0)
    {
        x1=-b/(2*a);
        printf("Only one root\nx1=%.2f",x1);

    }
    else if (dis>0)
    {
        x1=(-b+sqrt(dis))/(2*a);
        x2=(-b-sqrt(dis))/(2*a);
        printf("Two real roots!\nx1=%.3f\nx2=%.3f",x1,x2);
    }
    else {
        
        x1=(-b+sqrt(-dis))/(2*a);
        x2=(-b-sqrt(-dis))/(2*a);
        printf("Two imaginary roots!\nx1=%.3f\nx2=%.3f",x1,x2);
    }
    
    

    return 0;
}
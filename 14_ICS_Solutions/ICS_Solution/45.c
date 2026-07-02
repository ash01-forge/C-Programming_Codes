#include<stdio.h>
int main()
{
    float a,b,c,s,dif,mul,div;
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);
    printf("Enter choice:");
    scanf("%f",&c);
    if(c==1){
        s=a+b;
        printf("Addition:%f",s);
    }
    else if(c==2){
        dif=a-b;
        printf("Subtraction:%f",dif);
    }
    else if(c==3){
        mul=a*b;
       printf("Multiplication:%.0f",mul);
    }
    else if(c==4){
        div=a/(int)b;
        printf("Quotient:%.0f",div);
    }
    else{
        printf("Invalid Choice!");
    }

return 0;
}

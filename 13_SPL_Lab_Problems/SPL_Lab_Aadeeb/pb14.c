#include<stdio.h>
int main()
{
    float a,p;
    printf("Enter the total electricity bill:\n");
    scanf("%f",&a);
    if(a<=50){
    p=a*0.50;
    printf("Total bill:%.3f\n",p+p*0.20);
    }
    else if(a>50&&a<=150){
    p=50*0.50+(a-50)*0.75;
    printf("Total bill:%.3f\n",p+p*0.20);
    }
    else if (a>150&&a<=250){
    p=50*0.50+100*0.75+(a-150)*1.20;
    printf("Total bill:%.3f\n",p+p*0.20);
    }
    else if (a>250){
    p=50*0.50+100*0.75+100*1.20+(a-250)*1.50;
    printf("Total bill:%.3f\n",p+p*0.20);
    }
    else {printf("Enter valid input\n");}
    
    
    
    return 0;
}

#include<stdio.h>
int main()
{
    printf("*****Welcome to Adeeb Dairy and Sweets*****\nPlease select your item:\n");
           int a;
           float b;
           float c;
    printf("1)Chamcham=300Tk(kg)\n2)Roshogolla=350Tk(kg)\n3)Doi(small)=200Tk\n4)Doi(big)=400Tk\n");
    scanf("%d",&a);
    printf("Enter youur quantity:\n");
    scanf("%f",&b);
    if(a==1){
       c=b*300;
       printf("Your total amount:%f\n",c);
       }
       else if (a==2){
        c=b*350;
        printf("Your total amount:%f\n",c);
       }
       else if(a==3){
        c=b*200;
        printf("Your total amount:%f\n",c);
       }
       else if(a==4){
        c=b*400;
        printf("Your total amount:%f\n",c);
       }
       else{
        printf("Enter valid item\n");
       }
       printf("Thank you for purchasing.\nPlease do come.\n");
       return 0;
}

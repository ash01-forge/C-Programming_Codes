#include<stdio.h>
int main()
{
    float a,b,add,sub;
    int choice,case_choice,mul,quo,rem;
    printf("Enter the value of a:");
    scanf("%f",&a);
     printf("Enter the value of b:");
    scanf("%f",&b);
     printf("Enter the choice:");
    scanf("%d",&choice);
    if (choice==1){
        add=a+b;
        printf("Addition:%f",add);
    }
    else if (choice==2){
        sub=a-b;
        printf("Subtraction:%f",sub);
    }
    else if (choice==3){
        mul=a*b;
        printf("Multiplication:%.0f",mul);
    }
    else if (choice==4&&b!=0){

        printf("Give Case choices:1 for quotient and 2 for remainder\n");
        scanf("%d",&case_choice);

                /*printf("Case1:Quotient\n");
        scanf("%d",&case_choice);
        printf("Case2:Remainder");
        scanf("%d",&case_choice);
    }*/
    if (case_choice==1){
        quo=a/b;
        printf("Quotient:%.0f",quo);
    }
    else if (case_choice==2)
        {
        rem=(int)a%(int)b;
        printf("Rmainder:%d",rem);
    }
    else  {
        printf("Enter valid number");
    }
}
        else {
            printf("Enter valid choice");
        }
    return 0;
}

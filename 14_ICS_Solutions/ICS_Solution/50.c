#include<stdio.h>
int main()
{
    int a;
    printf("Hi there!\nWelcome to UIU canteen!\nEnter your food allocation:");
    scanf("%d",&a);
    if(a>=10&&a<=30){
        printf("Items you can have are:\n*Tea=10Tk\n*Singara=10Tk\n*Puri=10Tk\n*Vegetable Roll=30Tk");
    }
    else if(a>30&&a<=60){
            printf("Items you can have are:\n*Chicken Roll=35Tk\n*Chowmein=40Tk\n*Chicken Pie=60Tk\n*Dim Khichuri=55Tk");
        }
    else if(a>60&&a<=100){

        printf("Items you can have are:\n*Chicken Kichuri=65Tk\n*Vegetable Fried rice=75Tk\n*Burger=80Tk");
    }
    else if(a>100&&a<=150){
        printf("Items you can have are:\n*Chicken Tehari=110Tk\n*Fried Rice & Chicken Curry=130Tk\n*Fried Rice &Chicken Fry=150Tk");
    }
    else {
        printf("You can have anything to your liking!");
    }





    return 0;
}

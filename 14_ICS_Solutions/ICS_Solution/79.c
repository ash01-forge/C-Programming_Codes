#include<stdio.h>
int main()
{
    float c,gb,tot;
    printf("Select the data package:\n1.Basic Package\n2.Standard Package\n3.Premium Package\n");
    printf("Enter your choice:");
    scanf("%f",&c);
    printf("Enter the number of GBs you want to use:");
    scanf("%f",&gb);
    if (c==1){
        tot=50*gb;
        printf("You selected the Basic package\nThe total charge for your package is %.2f",tot);
    }
    else if (c==2){
        tot=100*gb;
        printf("You selected the Standard package\nThe total charge for your package is %.2f",tot);
    }
    else if (c==3) {
        tot=150*gb;
        printf("You selected the Premium package\nThe total charge for your package is %.2f",tot);
    }
    else {
        printf("Invalid package type selected.");
    }
    return 0;
}

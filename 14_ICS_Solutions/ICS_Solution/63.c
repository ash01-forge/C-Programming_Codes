#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a+b>c){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}

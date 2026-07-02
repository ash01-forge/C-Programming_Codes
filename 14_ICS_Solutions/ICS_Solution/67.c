#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    max=a;
    if (b>max){
        max=b;
    }
    else if (c>max) {
        max=c;
    }
    else {
        max=a;
    }
    if (max%2==0){
        printf("Red Number");
    }
    else if (max%3==0){
        printf("Blue Number");
    }
    else if (max%2==0&&max%3==0){
        printf("Purple Number");
    }
    else {
        printf("White Number");
    }
    return 0;
}

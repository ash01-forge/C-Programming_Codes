#include<stdio.h>
int main()
{
    int a,b,c,res1,res2,res3;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    res1=a+b*c;
    res2=b+a*c;
    res3=c+a*b;
    if (res2>res1){
        printf("Maximum Value=%d",res2);
    }
     else if (res3>res1){
        printf("Maximum Value=%d",res3);
    }
     else {
        printf("Maximum Value=%d",res1);
    }
    return 0;
}

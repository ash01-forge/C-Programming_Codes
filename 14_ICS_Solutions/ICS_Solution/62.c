#include<stdio.h>
int main()
{
    int a,b,c,min;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
     min=a;
    if (b<min){
            min=b;

    }
      if(c<min){
        min=c;
    }

     if((min%2)==0){
        printf("Even,Blue Number");
    }
    else {
        printf("Odd,Red Number");
    }

    return 0;
}

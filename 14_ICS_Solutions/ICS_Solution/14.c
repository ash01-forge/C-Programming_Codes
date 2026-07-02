#include<stdio.h>
int main()
{
    int a,b,sum,diff,mul,div,mod;

    a=18;
    b=7;
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("%d+%d=%d\n",a,b,sum);
     printf("%d-%d=%d\n",a,b,diff);
      printf("%d*%d=%d\n",a,b,mul);
       printf("%d/%d=%d\n",a,b,div);
        printf("%d%%%d=%d\n",a,b,mod);
    return 0;
}

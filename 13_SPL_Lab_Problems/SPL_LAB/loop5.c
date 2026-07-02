#include<stdio.h>
int main()
{
    int i,a;
    a=100;
    for(i=1;a>0;i=i-1){
        printf("%d ",a);
        a=a-3;
    }

    return 0;
}

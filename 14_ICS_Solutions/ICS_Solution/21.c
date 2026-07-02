#include<stdio.h>
int main()
{
    int cm,m,c;
    scanf("%d",&cm);
    m=cm/100;
    c=cm-m*100;
    printf("%d meter %d centimeter",m,c);
    return 0;

}

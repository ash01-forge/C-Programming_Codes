#include<stdio.h>
int main()
{
    int a,fa,la;
    char c;
    scanf("%d",&a);
    scanf(" %c",&c);
    fa=a/10;
    la=a%10;
    printf("%d%c%d",fa,c,la);

    return 0;
}

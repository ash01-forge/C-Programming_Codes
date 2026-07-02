#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a<=0 || b<=0 || c<=0) printf("Invalid");
    if (a>=180 || b>=180 || c>=180) printf("Invalid");
    if (a+b+c==180) printf("Valid");
    else printf("Invalid");
    return 0;
}

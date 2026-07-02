#include<stdio.h>
int sub(int a, int b)
{
    int c;
    c=a-b;
    return c;
}
int main()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    res=sub(a,b);
    printf("Result is: %d\n",res);
    return 0;
}
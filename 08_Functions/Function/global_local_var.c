#include<stdio.h>
int c;
void add(int a, int b)
{
    c=a+b;
}

int main()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    add(a,b);
    printf("Result is: %d\n",c);
    return 0;
}
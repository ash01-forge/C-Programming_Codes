#include<stdio.h>
float av;
void average(int a, int b, int c)
{
    av=(a+b+c)/3.0;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    average(a,b,c);
    printf("Result is: %.2f\n",av);
    return 0;
}
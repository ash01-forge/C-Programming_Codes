#include <stdio.h>
int parameter(int *x,int *y)
{
    int res1 = *x + *y;

    return res1;
}
int main()
{
    int n,m;
    printf("Enter the value of n and m:");
    scanf("%d %d", &n,&m);
    int res = parameter(&n,&m);

    printf("N=%d\nM=%d", res,m);
    return 0;
}
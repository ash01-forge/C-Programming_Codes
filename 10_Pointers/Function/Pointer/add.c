#include <stdio.h>
int sumd(int *x, int *y)
{
    int sum = *x + *y;
    return sum;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    int res = sumd(&a, &b);
    printf("Sum is:%d", res);
    return 0;
}
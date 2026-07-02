#include <stdio.h>
int func(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * func(n - 1);
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%d ", func(n));
    return 0;
}
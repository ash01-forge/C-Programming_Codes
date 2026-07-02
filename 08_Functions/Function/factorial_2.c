#include <stdio.h>
int factorial(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    printf("The factorial of %d=%d", a, sum);
    return sum;
}
int main()
{

    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    factorial(n);
    return 0;
}
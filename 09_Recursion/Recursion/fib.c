#include <stdio.h>
int fib(int num)
{
    int sum = 1;
    if (num == 0)
    {

        return 0;
    }
    else if (num == 1)
    {

        return 1;
    }
    else
    {

        return fib(num - 1) +
               fib(num - 2);
    }
}
void printfib(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fib(i));
    }
    return;
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printfib(n);
    return 0;
}
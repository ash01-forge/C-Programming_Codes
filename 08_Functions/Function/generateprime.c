#include <stdio.h>
int isprime(int x)
{
    if (x <= 1)
    {
        printf("Not prime");
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {

            return 0;
        }
    }

    return 1;
}
int Generateprime(int num)
{
    printf("Prime numbers less than %d:", num);
    for (int i = 2; i < num; i++)
    {
        if (isprime(i))
        {

            printf(" %d",i);
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    Generateprime(n);

    return 0;
}
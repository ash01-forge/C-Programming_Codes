#include <stdio.h>
int isprime(int x)
{
    if (x < 2)
    {
        printf("Not prime!");
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
int GenNthPrime(int num)
{
    int count = 0;
    int y = 1;
    while (count < num)
    {
        y++;

        if (isprime(y))
        {
            count++;
        }
    }
    return y;
}
int main()
{
    int n;
    printf("Enter the nth term:");
    scanf("%d", &n);
    int result=GenNthPrime(n);
    printf("%dth Prime:%d", n, result);
    return 0;
}
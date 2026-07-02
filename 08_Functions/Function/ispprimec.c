#include <stdio.h>
void isprime(int x)
{
    if (x <= 1)
    {
        printf("Not prime");
        return;
    }
    int flag = 0;
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {

            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    isprime(n);
    return 0;
}
#include <stdio.h>
int count_divisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}
int is_perfect_square(int n)
{
    int res = n / 2;
    int res1 = res * res;
    if (res1 == n)
    {
        printf("Yes %d is perfect square number\n", n);
        return 1;
    }
    else
        return 0;
}
int main()

{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    int cmp1 = count_divisors(a);
    int cmp2 = count_divisors(b);
    if (cmp1 > cmp2)
    {
        printf("%d has more divisors\n", a);
    }
    else
        printf("%d has more divisors\n", b);
    is_perfect_square(cmp1);
    is_perfect_square(cmp2);

    return 0;
}
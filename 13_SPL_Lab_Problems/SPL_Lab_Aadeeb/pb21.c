#include <stdio.h>
int main()
{
    int i, a, b, sum, n;
    printf("Enter the nth term:\n");
    scanf("%d", &n);
    a = 1;
    b = 1;

    printf("%d", a);

    i = 2;
    while (i <= n)
    {
        printf(" , %d", b);
        sum = a + b;
        a = b;
        b = sum;

        i++;
    }

    return 0;
}
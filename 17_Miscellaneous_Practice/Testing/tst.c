#include <stdio.h>
int getQuotient(int x, int n)
{
    return x / n;
}
int getRemainder(int x, int n)
{
    return x - ((x / n) * n);
}
int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int rem = getRemainder(num, 10);
        sum = sum + rem;
        num = getQuotient(num, 10);
    }
    return sum;
}
int isPrime(int num)
{
    int flag = 0;
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (getRemainder(num, i) == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m;
    printf("Enter the size of the arary:");
    scanf("%d", &m);
    int ArrayA[m], ArrayB[m];
    printf("Enter %d numbers:", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ArrayA[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ArrayB[i] = sumOfDigits(ArrayA[i]);
    }
    printf("Sum of digits (B):");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", ArrayB[i]);
    }
    printf("\n");
    int flag = 0;
    for (int i = 0; i < m; i++)
    {

        if (isPrime(ArrayB[i]))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Prime numbers in the sum array:");
        for (int i = 0; i < m; i++)
        {
            if (isPrime(ArrayB[i]))

                printf("%d ", ArrayB[i]);
        }
    }
    else
    {
        printf("No prime numbers found in the digit sums.");
    }

    return 0;
}

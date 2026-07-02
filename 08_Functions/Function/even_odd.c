#include <stdio.h>
int odd_even(int x)
{
    if (x % 2 == 0)
    {
        printf("Even");
    }
    else
        printf("Odd");
    return x;
}
int main()
{
    int a;
    printf("Enter the value of A:");
    scanf("%d", &a);
    odd_even(a);

    return 0;
}
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n, r;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter the value of r:\n");
    scanf("%d", &r);
    int nfact, rfact, n_rfact, result;
    nfact = factorial(n);
    rfact = factorial(r);
    n_rfact = factorial(n - r);
    result = nfact / (rfact * n_rfact);
    printf("The result nCr=%d", result);
    return 0;
}
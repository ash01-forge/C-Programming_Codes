#include <stdio.h>
int main()
{
    int n,n1, res, res1, res2 = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    n1=n;
    while (n!=0)
    {
        // res=n/10;
        res1 = n % 10;
        res2 = res2 * 10 + res1;
        n = n / 10;
    }
    if (n1 == res2)
    {
        printf("The number is Palindrome");
    }
    else
        printf("The number is not Palindrome");

    return 0;
}
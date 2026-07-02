#include <stdio.h>
int main()
{
    int n, rev, rev1 = 0;
    printf("Enter the number:");
    scanf("%d", &n);

    while (n != 0)
    {
        rev = n % 10;
        rev1 = rev1 * 10 + rev;
        n = n / 10;
    }
    printf("The reverse number is:%d", rev1);

    return 0;
}
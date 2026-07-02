#include <stdio.h>
int func(int n)
{
    if (n == 1)
    {
        printf("%d ",n);
        return 1;
    }
    printf("%d ", n);
    func(n - 1);
    return 0;
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    func(n);
    return 0;
}
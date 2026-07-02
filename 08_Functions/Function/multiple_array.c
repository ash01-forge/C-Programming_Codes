#include <stdio.h>
void mul(int m, int b[m])
{
    int c[m];
    for (int i = 0; i < m; i++)
    {
        c[i] = b[i] * 2;
        printf(" %d", c[i]);
    }
    return;
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array inputs:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mul(n, a);

    return 0;
}
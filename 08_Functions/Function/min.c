#include <stdio.h>
void minimum(int m, int b[m])
{
    int min = b[0];
    for (int i = 0; i < m; i++)
    {
        if (b[i] < min)
        {
            min = b[i];
        }
    }
    printf("Minimum Value:%d", min);
    return;
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minimum(n, a);

    return 0;
}
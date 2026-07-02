#include <stdio.h>
void sort(int m, int b[])
{
    int temp;

    for (int i = 0; i < m-1; i++)
    {

        if (b[i] > b[i + 1])
        {
            temp = b[i];
            b[i] = b[i + 1];
            b[i + 1] = temp;
        }
    
    printf("%d ",b[i]);
    }

    return;
}
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(n, a);
    return 0;
}
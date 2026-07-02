#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr1[n], *p;
    p = arr1;
    printf("Enter the array elemments:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = arr1+n-1;
    printf("Array elements in reverse order:");
    for (int i = n - 1; i >= 0; i--)
    {

        printf("%d ", *p);

        p--;
    }

    return 0;
}
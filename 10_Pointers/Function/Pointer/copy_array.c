#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr1[n], arr2[n], *p, *q;
    p = arr1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p);
        p++;
    }
    p = arr1;
    q = arr2;
    for (int i = 0; i < n; i++)
    {
        *q = *p;
        p++;
        q++;
    }
    q = arr2;
    for (int i = 0; i < n; i++)
    {
        printf("%d", *q);
        q++;
    }

    return 0;
}
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
    p = arr1;
    printf("Even indices array elements:");
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d", *p);
        }
            p++;
        
    }
    p = arr1;
    printf("\n");
    printf("Odd indices array elements:");

    for (int i = 0; i < n; i++)
    {

        if (i % 2 != 0)
        {

            printf("%d", *p);
        }
            p++;
        
    }

    return 0;
}
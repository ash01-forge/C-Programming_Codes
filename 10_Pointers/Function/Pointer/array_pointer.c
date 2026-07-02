#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int *p, arr[n];
    p=arr;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d",*p);
        p++;
    }
    
    
    return 0;
}
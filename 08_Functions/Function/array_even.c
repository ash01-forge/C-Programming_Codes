#include <stdio.h>
void even(int b[100]){
    while (1)
    {
        if (b[100]%2==0)
        {
            printf("%d",b[100]);
        }
        
    }

    return ;
    
}
int main()
{
    int a[100];
    printf("Enter the array elements:");
    scanf("%d", &a[100]);

    even(a);

    return 0;
}

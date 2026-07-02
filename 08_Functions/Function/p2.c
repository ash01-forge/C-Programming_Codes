#include <stdio.h>

char function(int x)
{
    printf("Value received from main:%c", x);
    return x;
}
int main()
{
    char a;
    printf("Enter the value of a:");
    scanf("%c", &a);
    function(a);
    return 0;
}
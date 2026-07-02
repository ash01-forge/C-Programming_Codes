#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);
    int l = strlen(a);
    printf("The length of the above string is %d", l);

    return 0;
}
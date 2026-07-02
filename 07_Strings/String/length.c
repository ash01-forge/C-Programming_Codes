#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    int length = 0;
    gets(str);
    for (int i = 0; str[i]; i++)
    {
        length++;
    }

    printf("Length of the string is:%d", length);

    return 0;
}
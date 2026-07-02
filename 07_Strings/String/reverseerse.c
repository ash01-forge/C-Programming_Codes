#include <stdio.h>
#include <string.h>
int main()
{
    char str[500];
    int i, j = 0;
    gets(str);
    while (str[j] != '\0')
    {
        j++;
    }
    for (int i = j - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
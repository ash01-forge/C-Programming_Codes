#include <stdio.h>
#include <string.h>
int main()
{
    char str[500], temp[500];
    gets(str);
    int len = strlen(str), i, j;
    i = 0;
    j = len - 1;
    while (i <= len - 1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {

            temp[i] = str[j];
            i++;
            j--;
        }
    }

    temp[len] = '\0';

    printf("%s", temp);

    return 0;
}
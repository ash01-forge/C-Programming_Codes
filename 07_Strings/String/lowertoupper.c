#include <stdio.h>
#include <string.h>
int main()
{
    char str[500], result[500];
    int i;
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            result[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            result[i] = str[i] + 32;
        }
        else
        {
            result[i] = str[i];
        }
    }
    result[i]='\0';
    printf("%s", result);

    return 0;
}
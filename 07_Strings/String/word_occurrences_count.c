#include <stdio.h>
#include <string.h>
int main()
{
    char str[500], temp[500];
    int count = 0, j = 0;
    gets(str);
    char ch[50];
    getchar();
    gets(ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            temp[j] = str[i];
            j++;
        }
        else
        {
            temp[j] = '\0';
        }
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (strcmp(temp, ch) == 0)
        {
            count++;
        }
    }
    printf("Occurences:%d", count);

    return 0;
}
#include <stdio.h>
int main()
{
    char str[500];
    gets(str);
    int word = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            word++;
        }
    }
    printf("%d",word);
    return 0;
}
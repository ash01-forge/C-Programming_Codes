#include <stdio.h>
int main()
{
    char str[500], ch;
    int count=0;
    printf("Enter the string:");
    gets(str);
    printf("Enter the charater:");
    scanf(" %c", &ch);
    char ch_lower, ch_upper;
    if (ch >= 'a' && ch <= 'z')
    {
        ch_lower = ch;
        ch_upper = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch_upper = ch;
        ch_lower = ch + 32;
    }
    else
    {
        ch_upper = ch;
        ch_lower = ch;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch_upper || str[i] == ch_lower)
        {
            count++;
        }
    }
    printf("Occurences: %d", count);

    return 0;
}
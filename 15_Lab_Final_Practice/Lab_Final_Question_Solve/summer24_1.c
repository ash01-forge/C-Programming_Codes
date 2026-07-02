#include <stdio.h>
void removeAllDuplicates(char str[500])
{
    int k;
    char dup[500];
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0';)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
            else j++;
        }
    }
}
int getsize(char str[500])
{
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}
void checkPalindrome(char *str)
{

    int length = getsize(str);
    int flag = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%s\nPalindrome", str);
    }
    else
    {
        printf("%s\nNot Palindrome", str);
    }
}
int main()
{
    char str[500];
    gets(str);
    removeAllDuplicates(str);
    checkPalindrome(str);
    return 0;
}

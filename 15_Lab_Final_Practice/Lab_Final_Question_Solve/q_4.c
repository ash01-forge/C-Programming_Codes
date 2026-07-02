#include <stdio.h>
int number_of_words(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            count++;
        }
    }
    return count;
}
int nth_word_length(char str[], int n)
{
    int length = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            length++;
        }
        if (length > 9)
        {
            printf("The first word has %d letters, so the string is not a Spell.", length);
        }
    }
    return length;
}
int is_prime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
        else
            return 1;
    }
}
int is_spell(char str[])
{
    int words = number_of_words(str);
    int num = 0;
    for (int i = 0; i < words; i++)
    {
        int length = nth_word_length(str, i);
        num = num * 10 + length;
    }
    int pr = is_prime(num);
    if (pr == 0)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    char str[500];
    gets(str);
    is_spell(str);
    if (is_spell(str) == 0)
    {
        printf("No");
    }
    else
        printf("Yes");
    return 0;
}
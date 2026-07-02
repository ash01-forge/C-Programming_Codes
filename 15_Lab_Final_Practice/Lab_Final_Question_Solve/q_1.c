#include <stdio.h>
void removeSpecialCharacters(char str[])
{
    char ch[500];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z')
        {
            ch[i] = str[i];
        }
        else
        {
            str[i] = ' ';
            ch[i] = str[i];
        }
    }
    return;
}
char changeAlphabet(char alphabet)
{
    if (alphabet >= 'A' && alphabet <= 'Z')
    {
        return 'Z' - (alphabet - 'A');
    }
    else if (alphabet >= 'a' && alphabet <= 'z')
    {
        return 'z' - (alphabet - 'a');
    }
    else
        return alphabet;
}
void encoder(char *p)
{
    removeSpecialCharacters(p);
    for (int i = 0; p[i] != '\0'; i++)
    {
        if ((p[i] >= 'A' && p[i] <= 'Z') || (p[i] >= 'a' && p[i] <= 'z'))
        {

           p[i]=changeAlphabet(p[i]);
        }
    }
    return;
}
int main()
{
    char str[500];
    gets(str);
    encoder(str);
    printf("%s", str);
    return 0;
}
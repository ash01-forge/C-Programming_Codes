#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[100];
    getchar();
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((i + 1) % n == 0)
        {
            str[i] = 'Z';
        }
    }
    // getchar();
    puts(str);
    return 0;
}
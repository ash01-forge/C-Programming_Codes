#include <stdio.h>
int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int i;
    for (i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }

    puts(a);
    puts(b);

    return 0;
}
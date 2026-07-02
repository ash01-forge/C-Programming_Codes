#include <stdio.h>
int main()
{
    int a, rem, ori, check = 0;
    printf("X=");
    scanf("%d", &a);
    ori = a;
    while (a != 0)
    {
        rem = a % 10;
        check = check * 10 + rem;
        a = a / 10;
    }
    if (check == ori)
    {
        printf("true");
    }
    else
        printf("false");
    return 0;
}
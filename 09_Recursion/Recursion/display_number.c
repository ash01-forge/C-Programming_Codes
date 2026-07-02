#include <stdio.h>
void display(int num)
{

    if (num > 10)
    {
        return;
    }
    else
    {
        printf("%d ", num);
    }

    display(num + 1);
    return;
}
int main()
{
    int start = 1;
    display(start);
    return 0;
}
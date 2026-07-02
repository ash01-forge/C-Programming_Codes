#include <stdio.h>
void swap(int x, int y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    printf("Value in func: %d %d\n", x, y);
}
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("Value in main: %d %d", a, b);
    return 0;
}
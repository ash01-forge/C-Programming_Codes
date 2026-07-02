#include <stdio.h>
int pos_neg_zero(int x)
{
    if (x > 0)
    {
        printf("positive");
    }
    else if (x == 0)
    {

        printf("zero");
    }
    else
        printf("negative");
    return x;
}
int main()
{
    int a;
    printf("Enter the value of A:");
    scanf("%d", &a);
    pos_neg_zero(a);

    return 0;
}
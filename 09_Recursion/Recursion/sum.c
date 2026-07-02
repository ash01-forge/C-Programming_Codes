#include <stdio.h>
int sumd(int num)
{
    int sum = 0;
    if (num==0)
    {
        return 0;
    }
    else{
        sum=num+sumd(num-1);
    }
    
    return sum;
}
int main()
{
    int n;
    printf("Enter te value of n:");
    scanf("%d", &n);

    printf("The sum is:%d", sumd(n));

    return 0;
}
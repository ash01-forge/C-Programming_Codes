#include<stdio.h>
int main()
{
    int A,B;
    A=10;
    B=20;
    printf("Before Swap:A=%d,B=%d\n",A,B);
    int temp=A;
    A=B;
    B=temp;
    printf("After Swap:A=%d,B=%d",A,B);
    return 0;
}

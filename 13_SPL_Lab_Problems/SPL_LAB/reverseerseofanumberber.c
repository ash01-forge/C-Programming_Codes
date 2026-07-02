#include<stdio.h>
int main()
{ int i,n,ld;
printf("Enter the number n:\n");
scanf("%d",&n);
while(n!=0)
{
    ld=n%10;


    n=n/10;

    printf("%d",ld);
}

    return 0;
}


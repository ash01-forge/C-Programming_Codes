#include<stdio.h>
int main()
{ int i,n,ld,r,sum=0;
printf("Enter the number n:\n");
scanf("%d",&n);
while(n!=0)
{
    ld=n%10;
    r=ld;

    sum=n+r;

    n=n/10;


}
   printf("%d",sum);


    return 0;
}


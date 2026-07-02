#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    a=0;
    for(i=2;i<=n-1;i++)
       {

        if(n%i==0)
            a=1;

        break;
       }
        if(n==1)printf("Neither prime nor composite\n");
        else if(a==0)printf("The number is Prime\n");
        else printf("The number is Composite");

    return 0;
}

#include<stdio.h>
int main()
{
    int i,n;
    printf("The table you want to print\n");
    scanf("%d",&n);
    printf("Here is the table of %d\n",n);
    for(i=n;i<=n*10;i=i+n)
        printf("%d\n",i);
    return 0;
}

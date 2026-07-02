#include<stdio.h>
int main()
{ int i,n;
printf("Enter the Number:\n");
scanf("%d",&n);
//a=1;
for(i=1;i<=n;i++)
 {
    if(i%2!=0)
        printf("%d ",i);
 }

    //a=a+2;
    return 0;
}

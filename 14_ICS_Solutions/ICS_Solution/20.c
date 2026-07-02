#include<stdio.h>
int main()
{
    int s,u,a,t;
    scanf("%d %d %d",&u,&a,&t);
    s=u*t+.5*a*pow(t,2);
    printf("s=%d",s);
    return 0;
}

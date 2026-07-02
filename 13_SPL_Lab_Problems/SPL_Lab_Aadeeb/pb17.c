#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the nth term:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i%2==0)
    {printf("1");}
    else {printf("0");}
    
    if(i<n-1)
    {printf(", ");}
    }
    return 0;
}
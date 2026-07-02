#include <stdio.h>
void greater(int x,int y){
    if (x>y)
    {
       printf("%d is greater than %d",x,y);

    }
    else if (x==y)
    {
        printf("%d is equal to %d",x,y);
    }
    
    else printf("%d is less than %d",x,y);
    return;
    
}
int main()
{
    int a,b;
    printf("Enter the value of a nad b:");
    scanf("%d %d",&a,&b);
    greater(a,b);
    return 0;
}
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
    if(x>y){
        printf("%d is greater than %d",x,y);

    }
    else if(x<y){
        printf("%d is less than %d",x,y);
    }
    else {
        printf("%d is equal to %d",x,y);
    }






return 0;
}

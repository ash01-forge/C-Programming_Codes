#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

        if (x>y){
        printf("%d is greater than %d",x,y);
        }
        else if (x<y){
        printf("%d is less than %d",x,y);
        }
        else if (x==y){
        printf("%d is equal to %d",x,y);
    }


    return 0;

}

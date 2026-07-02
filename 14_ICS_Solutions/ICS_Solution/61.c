#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,res;
    scanf("%f",&x);
      scanf("%f",&y);
      if (x<0&&y<0){
        res=pow(x,3)+5*x*y;
        printf("%.3f",res);
      }
      else if (x<0&&y>0){
        res=4*y;
        printf("%.3f",res);
      }
      else if (x>=0){
        res=1/(x+y);
        printf("%.3f",res);
      }
      else {
        printf("Undefined");
      }
    return 0;
}

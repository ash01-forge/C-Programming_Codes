#include<stdio.h>
#include<math.h>
int main()
{
   float a;
   int f,c;
   scanf("%f",&a);
   f=floor(a);
   c=ceil(a);
   printf("Floor=%d\nCeiling=%d ",f,c);
   return 0;
}

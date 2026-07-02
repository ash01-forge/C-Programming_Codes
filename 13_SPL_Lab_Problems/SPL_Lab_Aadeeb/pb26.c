#include<stdio.h>
int main()
{
    int i,a,b,res;
    printf("Enter The Number a and b:\n");
    scanf("%d%d",&a,&b);
   while (a!=b)
   {
     printf("%d",a*a);
     if (a<b)
     {
        a++;
     }
     else 
     {
        a--;
     }
     if(a<b||a>b||a==b){
        printf(",");
     }

   }
   printf("Reached!\n");
   
    

    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    b=a/500;
    c=(a%500)/100;
    d=((a%500)%100)/50;
    e=(((a%500)%100)%50)/10;
    f=((((a%500)%100)%50)%10)/5;
    g=(((((a%500)%100)%50)%10)%5)/1;
    printf("%d note(s) of 500\n",b);
     printf("%d note(s) of 100\n",c);
      printf("%d note(s) of 50\n",d);
       printf("%d note(s) of 10\n",e);
        printf("%d note(s) of 5\n",f);
         printf("%d note(s) of 1",g);
   return 0;
}

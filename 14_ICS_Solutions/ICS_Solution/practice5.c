#include<stdio.h>
#include<math.h>
int main ()
{

int a,b,c;
double S,area;
printf ("enter the number a:");
scanf ("%d",&a);
printf ("enter the number b:");
scanf ("%d", &b) ;
printf ("enter the number c:") ;
scanf ("%d", &c) ;
S=(a+b+c)/2;
area=sqrt(S*(S-a)*(S-b)*(S-c));
printf ("%lf-", area) ;
return 0;
}

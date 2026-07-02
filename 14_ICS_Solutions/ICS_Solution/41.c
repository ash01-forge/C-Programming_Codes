#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if((a>0&&a!=0)&&(sqrt(pow(a,2))==a))
    {
        printf("Yes");
    }
    else if(a==0)
    {
        printf("Zero is not a valid input");
    }
    else if(a<0)
    {
        printf("Negative input is not valid");
    }
    else{
        printf("No");
    }

   return 0;
}

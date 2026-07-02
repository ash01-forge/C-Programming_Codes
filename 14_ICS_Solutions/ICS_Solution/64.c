#include<stdio.h>
int main()
{
    int a,b,f;
    char c;
    scanf("%d",&a);
    scanf(" %c",&c);
    b=a%10;
    switch(c){
    case '+': f=b+b+b;
             printf("%d+%d+%d=%d",b,b,b,f);
    break;
    case '-': f=b-b-b;
             printf("%d-%d-%d=%d",b,b,b,f);
    break;
    case '*': f=b*b*b;
             printf("%d*%d*%d=%d",b,b,b,f);
    break;
    default: printf("The input is invalid");

}
return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a==0)
        printf("Zero is not a Valid Input");
    else if(a>0||a==pow(sqrt(a),2)) printf("Yes");
    else printf("Negative number is not Valid");
    return 0;
}


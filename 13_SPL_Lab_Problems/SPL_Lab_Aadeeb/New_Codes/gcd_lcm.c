#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value  of a:");
    scanf("%d",&a);
    
    printf("Enter the value  of b:");
    scanf("%d",&b);
    int div,num,res,rem;
    if (a>b)
    {
        num=a;
        div=b;
    }
    else
    {
        num=b;
        div=a;
    }
    while (1)
    {
        
        rem=num%div;
        res=num/div;
        if (rem==0)
        {
            break;
        }
        else
        {
            num=div;
            div=rem;
            
        }
        //printf("The HCF is:%d",div);
    }
    printf("The HCF is:%d",div);
    if (a>b)
    {
        num=a;
        div=b;
    }
    else
    {
        num=b;
        div=a;
    }
    int i=1;
    int num1;
    
    while (1)
    {
        num1=num*i;
        res=num1%div;
        if (res==0)
        {
            break;
        }
       else
        {
           i++;
        }

        
        
       
    }
    printf("\nThe LCM is:%d",num1);
    
    
    
    return 0;
}
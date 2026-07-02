#include<stdio.h>
int main()
{
    char str[500];
    int sum=0;
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='0'&&str[i]<='9')
        {
            
            sum=sum+str[i]-'0';
        }
        
    }
    printf("Sum is:%d",sum);
    
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[500],temp;
    int i,j;
    gets(str);
    for ( i = 0;str[i]!='\0'; i++)
    {
        for ( j = i+1; str[j]!='\0'; j++)
        {
            if (str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }

            
        }
        
    }
    printf("%s",str);
    
    return 0;
}
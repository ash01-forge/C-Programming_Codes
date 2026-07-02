#include<stdio.h>
int main()
{
    char str[500];
    int count=0,i=0;
    gets(str);
    while (str[i]!='\0')
    {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
        i++;
        
    }
    printf("The number of vowels are:%d",count);
    
    return 0;
}
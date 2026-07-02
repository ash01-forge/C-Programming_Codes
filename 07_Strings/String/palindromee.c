#include<stdio.h>
#include<string.h>
int main()
{
    char str[500];
    int length,flag=0;
    printf("Enter the string:");
    gets(str);
    length=strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        if (str[i]!=str[length-i-1])
        {
            flag=1;
            break;

        }
        
    }
    if (flag==0)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    
    return 0;
}
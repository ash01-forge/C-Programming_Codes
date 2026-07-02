#include<stdio.h>
void removeAllDuplicates(char str[100])
{
    char ch[100];
    for(int i=0; str[i]!='\0'; i++)
    {
        ch[i]=str[i];
        for(int j=i+1; str[j]!='\0';)
        {
            if(ch[i]==str[j])
            {
                for(int k=j; str[k]!='\0'; k++)
                {
                    str[k]=str[k+1];
                }

            }
            else j++;

        }

    }
    return;
}
int getSize(char str[100])
{
    int size=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        size++;
    }
    return size;
}
void checkPalindrome(char *str)
{
    removeAllDuplicates(str);
    int len=getSize(str);
    int flag=0;
    for(int i=0; i<len; i++)
    {
        if(str[i]==str[len-i-1])
        {
            flag=0;
        }
        else flag=1;
    }
    if(flag==0)
    {
        printf("%s\nPalindrome",str);
    }
    else printf("%s\nNot Palindrome");
    return;
}
int main()
{
    char str[100];
    gets(str);
    checkPalindrome(str);

    return 0;

}

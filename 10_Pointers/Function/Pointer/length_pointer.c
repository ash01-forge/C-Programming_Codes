#include <stdio.h>
int main()
{
    char str[500];
    gets(str);
    char *p;
    p = str;
    int length = 0,i=0;
   while (*p!=0)
   {
    length++;
   p++;
   }
   
    printf("The length of the string is:%d", length);

    return 0;
}
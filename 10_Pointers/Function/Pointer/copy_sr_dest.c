#include<stdio.h>
#include<string.h>
void cpy(char *p, char *q){
    strcpy(q,p);
    return ;
}
int main()
{
    char src[500],dest[500];
    gets(src);
    cpy(src,dest);
    puts(dest);
    
    return 0;
}
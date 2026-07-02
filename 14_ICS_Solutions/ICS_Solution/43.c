#include<stdio.h>
int main()
{
    char c;
    printf("Enter C:");
    scanf("%c",&c);
    if(c>='a'&&c<='z'){
        printf("Alphabet");
    }
    else if(c>='A'&&c<='Z'){
        printf("Alphabet");
    }
    else if(c>='0'&&c<='9'){
        printf("Digit");
    }
    else{
        printf("Special");
    }


return 0;
}

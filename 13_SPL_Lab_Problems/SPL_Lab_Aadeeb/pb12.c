#include<stdio.h>
int main()
{
    char c;
    printf("Enter the input:\n");
    scanf(" %c",&c);
    if(c>='0'&&c<='9'){
        printf("Not an Alphabet\n");
    }

    else if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {

        printf("Vowel");
    }



    else printf("A Consonant\n");



    return 0;
}

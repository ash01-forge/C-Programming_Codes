#include<stdio.h>
int main()
{

    char c;
    printf("Enter the value");
    scanf(" %c",&c);
    if (c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
        printf("Vowel");
        //else printf("A consonant");

    else printf("A Consonant");
     if (c>0||c<0) printf("Not an alphabet");
     else printf("A Consonant");
     return 0;
}

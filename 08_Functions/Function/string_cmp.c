#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],p[100];
    gets(a);
    gets(b);
    gets(p);
    int c;
    c=strcmp(a,b);
    int d=strcmp(b,p);
    printf("%d\n%d",c,d);
    /*
    a="Hello"
    b="Hello"
    a-b = 0

    a="Hellooooooo"
    b="HeLlpppppppppp"
    a-b
    'l' - 'L' >0 1

    a="HeLlooooooo"
    b="Hellpppppppppp"
    a-b
    'L' - 'l' <0 -1

    */

    return 0;
}
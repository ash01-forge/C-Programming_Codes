#include <stdio.h>
struct student
{
    char name[50];
    char id[20];
    float cgpa;
};

int main()
{
    struct student s1;

    gets(s1.name);
    gets(s1.id);
    scanf("%f", &s1.cgpa);

    puts(s1.name);
    puts(s1.id);
    printf("%.2f", s1.cgpa);

    return 0;
}
#include <stdio.h>
struct student
{
    char name[50];
    int id;
    float cgpa;
};
void better(struct student s1, struct student s2)
{
    if (s1.cgpa > s2.cgpa)
    {
        printf("The studdent with highest CGPA:\n");

        puts(s1.name);
        printf("%d\n", s1.id);
        printf("%.2f\n", s1.cgpa);
    }
    else
    {
        printf("The studdent with highest CGPA:\n");

        puts(s2.name);
        printf("%d\n", s2.id);
        printf("%.2f\n", s2.cgpa);
    }
    return;
}

int main()
{

    struct student s1;

    gets(s1.name);
    scanf("%d", &s1.id);
    scanf("%f", &s1.cgpa);
    struct student s2;
    getchar();

    gets(s2.name);
    scanf("%d", &s2.id);
    scanf("%f", &s2.cgpa);

    better(s1, s2);

        return 0;
}
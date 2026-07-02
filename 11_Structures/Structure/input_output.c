#include <stdio.h>
struct student
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{
    int n;
    printf("Enter the number of stuents:");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        getchar();

        gets(s[i].name);
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cgpa);
    }

    for (int i = 0; i < n; i++)
    {
        

        puts(s[i].name);
        printf("%d\n", s[i].id);
        printf("%.2f\n", s[i].cgpa);
    }
    printf("\n");
    return 0;
}
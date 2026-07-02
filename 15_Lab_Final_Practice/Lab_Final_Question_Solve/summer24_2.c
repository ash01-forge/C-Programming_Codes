#include <stdio.h>
struct student
{
    char name[50];
    int id;
    float marks[5];
};
float Add_a_new_student(struct student s1)
{
    getchar();
    gets(s1.name);
    scanf("%d", &s1.id);
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &s1.marks[i]);
    }
    float average, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + s1.marks[i];
    }
    average = sum / 5;
    return average;
}
void displayStudents(struct student s1)
{
    printf("Student Records:\nID:%d, Name:%s,Marks:", s1.id, s1.name);
    for (int i = 0; i < 5; i++)
    {
        printf(" [%f,]", s1.marks[i]);
    }
    printf(", Average:%f", Add_a_new_student(str));
}
int main()
{
    return 0;
}
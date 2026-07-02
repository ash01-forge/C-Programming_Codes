#include<stdio.h>

struct student
{
    char name[100];
    int id;
    float marks[5];
    float average;
};

float AddStudent(struct student s[], int index)
{

    float sum=0;
    printf("Enter the student name:");
    getchar();
    gets(s[index].name);
    printf("Enter the student ID:");
    scanf("%d",&s[index].id);
    printf("Enter the student Marks for 5 subjects:");
    for(int i=0; i<5; i++)
    {
        scanf("%f",&s[index].marks[i]);
        sum=sum+s[index].marks[i];
    }
    printf("Student added successfully\n");

    s[index].average=sum/5;
    return s[index].average;
}
void displaystudents( struct student s[], int index)
{
    printf("Student Records:\n");
    for(int i=0; i<index; i++)
    {
        printf("Id:%d, Name:%s, Marks:",s[i].id,s[i].name);
        for(int j=0; j<5; j++)
        {
            printf("[%f,]",s[i].marks[j]);

        }
        printf(" Average:%.1f\n",s[i].average);

    }
    return;

}
void findtop(struct student s[],int index)
{
    float highest=0;
    int topin=0;
    for(int i=0; i<index; i++)
    {
        if(s[i].average>highest)
        {
            highest=s[i].average;
            topin=i;
        }
    }
    printf("Top performer:%s, Average Marks:%.1f\n",s[topin].name,highest);

    return ;
}
void Failingstudent(struct student s[],int index)
{
    float fail=40;
    for(int i=0; i<index; i++)
    {
        if(s[i].average<fail)
        {
            fail=s[i].average;

        }
        printf("Failing Students:%s, Failed Subjects:%d",s[i].name,i);
        return ;
    }
}
int main()
{
    int index=0;
    struct student s[100];
    int choice;
    while(1)
    {
        printf("\n1. Add a new student\n2. Display all students\n3. Find top performer\n4. Find failing students\n5. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            AddStudent(s,index);
            index++;
        }
        else if(choice==2)
        {
            displaystudents(s,index);

        }
        else if(choice==3)
        {
            findtop(s,index);

        }
        else if(choice==4)
        {
            Failingstudent(s,index);

        }
        else if(choice==5)
        {

            printf("Exiting the program!!\n");
            break;

        }
        else
        {
            printf("Enter a valid choice\n");

        }
    }


    return 0;

}


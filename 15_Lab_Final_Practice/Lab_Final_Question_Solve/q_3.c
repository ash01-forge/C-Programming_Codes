#include <stdio.h>
struct patient
{
    char name[50];
    int age;
    char Gender;
    int id;
    char condition[100];
};
void addPatient(struct patient p[100], int c)
{
    printf("Enter the patient name:\n");
    getchar();
    gets(p[c].name);
    printf("Enter age:\n");
    scanf("%d", &p[c].age);
    printf("Enter Gender (M/F):\n");
    scanf(" %c", &p[c].Gender);
    printf("Enter ID:\n");
    scanf("%d", &p[c].id);
    printf("Enter condition:\n");
    getchar();
    gets(p[c].condition);
}
int searchbyid(struct patient p[100], int c)
{
    int search;
    printf("Enter patient ID to search:");
    scanf("%d", &search);
    for (int i = 0; i < c; i++)
    {

        if (search == p[i].id)
        {
            printf("Patient Records:\n");
            printf("ID: %d, Name: %s, Age: %d, Gender:%c, Condition: %s\n", p[i].id, p[i].name, p[i].age, p[i].Gender, p[i].condition);
        }
    }
    return search;
}
void updatepatient(struct patient p[100], int c)
{
    int search;
    printf("Enter patient ID to update:");
    scanf("%d", &search);
    for (int i = 0; i < c; i++)
    {

        if (p[i].id == search)
        {
            printf("Enter new condition:");
            getchar();
            gets(p[i].condition);
            printf("Condition updated successfully.");
        }
    }
    return;
}
void displaylist(struct patient p[100], int c)
{
    printf("Patient Records:\n");
    for (int i = 0; i < c; i++)
    {

        printf("ID: %d, Name: %s, Age: %d, Gender:%c, Condition: %s\n", p[i].id, p[i].name, p[i].age, p[i].Gender, p[i].condition);
    }
}
int main()
{
    struct patient p[100];
    int choice, c = 0;
    while (1)
    {
        printf("1. Add a new patient\n2. Search for a patient by ID\n3. Update a patient's condition\n4. Display all patients\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            addPatient(p, c);
            printf("Patient added successfully.\n");
            c++;
        }
        else if (choice == 2)
        {
            searchbyid(p, c);
        }
        else if (choice == 3)
        {
            updatepatient(p, c);
        }
        else if (choice == 4)
        {
            displaylist(p, c);
        }
        else if (choice == 5)
        {
            printf("Exiting program.");
            break;
        }

        else
            printf("Enter a valid choice!");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[100];
    int id;
    char department[50];
    float salary;
};

struct Employee employees[100];
int noOfEmployees = 0;

void addEmployee()
{
    getchar();

    struct Employee newEmp;

    printf("Enter employee name: ");
    gets(newEmp.name);

    printf("Enter employee ID: ");
    scanf("%d", &newEmp.id);
    getchar();

    printf("Enter department: ");
    gets(newEmp.department);

    printf("Enter salary: ");
    scanf("%f", &newEmp.salary);

    employees[noOfEmployees] = newEmp;
    noOfEmployees++;

    printf("Employee added successfully!\n");
}

void viewEmployees()
{
    if (noOfEmployees == 0)
    {
        printf("No employees to display.\n");
        return;
    }

    printf("\n------ All Employees ------\n");
    for (int i = 0; i < noOfEmployees; i++)
    {
        printf("(%s, ID: %d, Dept: %s, Salary: %.2f)\n",
               employees[i].name, employees[i].id,
               employees[i].department, employees[i].salary);
    }
    printf("---------------------------\n");
}

void viewByDepartment()
{
    getchar();
    char dept[50];
    int found = 0;

    printf("Enter department to search: ");
    gets(dept);

    printf("\n-- Employees in %s --\n", dept);
    for (int i = 0; i < noOfEmployees; i++)
    {
        if (strcmp(employees[i].department, dept) == 0)
        {
            printf("(%s, ID: %d, Salary: %.2f)\n",
                   employees[i].name, employees[i].id, employees[i].salary);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No employees found in this department.\n");
    }
    printf("---------------------------\n");
}

void updateEmployee()
{
    getchar();

    int id;
    printf("Enter employee ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < noOfEmployees; i++)
    {
        if (employees[i].id == id)
        {
            int choice;
            printf("What do you want to update?\n");
            printf("1. Name\n2. Department\n3. Salary\n");
            scanf("%d", &choice);
            getchar();

            if (choice == 1)
            {
                printf("Enter new name: ");
                gets(employees[i].name);
            }
            else if (choice == 2)
            {
                printf("Enter new department: ");
                gets(employees[i].department);
            }
            else if (choice == 3)
            {
                printf("Enter new salary: ");
                scanf("%f", &employees[i].salary);
            }
            else
            {
                printf("Invalid option!\n");
                return;
            }

            printf("Employee updated successfully!\n");
            return;
        }
    }

    printf("Employee with ID %d not found!\n", id);
}

void deleteByID()
{
    getchar();
    int id;
    printf("Enter ID of employee to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < noOfEmployees; i++)
    {
        if (employees[i].id == id)
        {
            for (int j = i; j < noOfEmployees - 1; j++)
            {
                employees[j] = employees[j + 1];
            }
            noOfEmployees--;
            printf("Employee deleted successfully!\n");
            return;
        }
    }

    printf("Employee ID not found!\n");
}

void deleteByDepartment()
{
    getchar();
    char dept[50];
    printf("Enter department to delete all employees from: ");
    gets(dept);

    int i = 0, deleted = 0;
    while (i < noOfEmployees)
    {
        if (strcmp(employees[i].department, dept) == 0)
        {
            for (int j = i; j < noOfEmployees - 1; j++)
            {
                employees[j] = employees[j + 1];
            }
            noOfEmployees--;
            deleted++;
        }
        else
        {
            i++;
        }
    }

    if (deleted > 0)
    {
        printf("%d employee(s) deleted from department %s\n", deleted, dept);
    }
    else
    {
        printf("No employees found in department %s\n", dept);
    }
}
void saveToFile()
{
    FILE *fp = fopen("employees.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "------ All Employees ------\n");
    for (int i = 0; i < noOfEmployees; i++)
    {
        fprintf(fp, "(%s, ID: %d, Dept: %s, Salary: %.2f)\n",
                employees[i].name, employees[i].id,
                employees[i].department, employees[i].salary);
    }
    fprintf(fp, "---------------------------\n");

    fclose(fp);
    printf("Employee data saved to employees.txt\n");
}

int main()
{
    while (1)
    {
        printf("\n--- Employee Records Menu ---\n");
        printf("1. Add an Employee\n");
        printf("2. View All Employees\n");
        printf("3. View Employees by Department\n");
        printf("4. Update an Employee\n");
        printf("5. Delete by ID\n");
        printf("6. Delete by Department\n");
        printf("7. Exit\n");
        printf("Choose an option: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 1)
        {
            addEmployee();
        }
        else if (choice == 2)
        {
            viewEmployees();
        }
        else if (choice == 3)
        {
            viewByDepartment();
        }
        else if (choice == 4)
        {
            updateEmployee();
        }
        else if (choice == 5)
        {
            deleteByID();
        }
        else if (choice == 6)
        {
            deleteByDepartment();
        }
        else if (choice == 7)
        {
            saveToFile();
            break;
        }
        else
        {
            printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}

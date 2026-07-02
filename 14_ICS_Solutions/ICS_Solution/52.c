#include<stdio.h>
int main()
{
    float a, b, add, sub, rem;
    int choice, case_choice, mul, quo;

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    // Input the main choice
    printf("Enter the choice (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division): ");
    scanf("%d", &choice);

    if (choice == 1) {
        add = a + b;
        printf("Addition: %.2f\n", add);
    }
    else if (choice == 2) {
        sub = a - b;
        printf("Subtraction: %.2f\n", sub);
    }
    else if (choice == 3) {
        mul = a * b;
        printf("Multiplication: %.2f\n", mul);
    }
    else if (choice == 4) {
        if (b != 0) {
            printf("Give Case choices: 1 for Quotient and 2 for Remainder\n");
            scanf("%d", &case_choice);

            if (case_choice == 1) {
                quo = a / b;
                printf("Quotient: %.2f\n", quo);
            }
            else if (case_choice == 2) {
                rem = (int)a % (int)b;
                printf("Remainder: %d\n", (int)rem);
            }
            else {
                printf("Invalid case choice.\n");
            }
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid choice. Please enter a valid number (1-4).\n");
    }

    return 0;
}


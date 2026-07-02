#include <stdio.h>

int main() {
    double a, b;
    int choice;

    // Taking user input
    printf("Enter two numbers (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("Enter your choice (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division): ");
    scanf("%d", &choice);

    // Performing operations based on choice
    switch (choice) {
        case 1:
            printf("Addition: %.2lf\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.2lf\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.2lf\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Quotient: %.2lf\n", a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}


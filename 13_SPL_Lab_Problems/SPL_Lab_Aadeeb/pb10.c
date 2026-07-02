#include <stdio.h>
#include <math.h>

int main() {
    double a, b, s;
    int choice, choice2;

    // Input numbers
    printf("Enter the numbers a and b:\n");
    scanf("%lf %lf", &a, &b);

    // Menu for operations
    printf("\nEnter your Choice:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            s = a + b;
            printf("Addition: %.2lf\n", s);
            break;

        case 2:
            s = a - b;
            printf("Subtraction: %.2lf\n", s);
            break;

        case 3:
            s = a * b;
            printf("Multiplication: %.2lf\n", s);
            break;

        case 4:
            if (b != 0) {
                printf("Enter another choice:\n1) Quotient\n2) Remainder\n");
                scanf("%d", &choice2);

                switch (choice2) {
                    case 1:
                        s = a / b;
                        printf("Quotient: %.2lf\n", s);
                        break;

                    case 2:
                        s = fmod(a, b);
                        printf("Remainder: %.2lf\n", s);
                        break;

                    default:
                        printf("Invalid choice\n");
                        break;
                }
            } else {
                printf("Error: Divisor is zero\n");
            }
            break;

        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}


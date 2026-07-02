#include <stdio.h>
#include <math.h>

int main() {
    double num = -9.0;
    double result;

    result = sqrt(fabs(num)); // Using fabs for non-negative value
    printf("Square root: %.2f\n", result);

    result = pow(2.0, 3);
    printf("Power: %.2f\n", result);

    result = fabs(num); // Using fabs for floating point absolute value
    printf("Absolute value: %.2f\n", result);

    return 0;
}

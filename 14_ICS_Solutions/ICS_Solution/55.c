#include <stdio.h>

int main() {
    float num;

    // Taking input from the user
    printf("Enter a floating point number: ");
    scanf("%f", &num);

    // (a) Print the number right justified within 10 columns
    printf("(a) Val:%10.6f\n", num);

    // (b) Print the number right justified to 2 columns (Assuming input has more than 2 digits)
    printf("(b) Val:%2.6f\n", num);

    // (c) Print the number rounded to two decimal places
    printf("(c) Val:%.2f\n", num);

    // (d) Print the number rounded to integer (without using conversion or type casting)
    printf("(d) Val:%.0f\n", num);

    // (e) Print the number in exponential notation/scientific notation
    printf("(e) Val: %e\n", num);

    return 0;
}

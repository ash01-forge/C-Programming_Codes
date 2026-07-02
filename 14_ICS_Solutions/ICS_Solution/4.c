#include <stdio.h>

int main() {
    // Declare and initialize variables
    long int longInt = 2147483647;
    long long int longLongInt = 9223372036854775807;
    long double longDouble = 1.1E+4932;
    short int shortInt = 32767;

    // Print the values
    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Le\n", longDouble);
    printf("The short int value: %d\n", shortInt);

    // Initialize with negative values and print
    longInt = -2147483648;
    longLongInt = -9223372036854775808;
    longDouble = 3.4E-4932;
    shortInt = -32768;

    // Print the values
    printf("The long int value: %ld\n", longInt);
    printf("The long long int value: %lld\n", longLongInt);
    printf("The long double value: %Le\n", longDouble);
    printf("The short int value: %d\n", shortInt);

    return 0;
}


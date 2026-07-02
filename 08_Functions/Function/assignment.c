#include <stdio.h>

int getRemainder(int x, int n) {
    return x - (x / n) * n;
}

int getQuotient(int x, int n) {
    return x / n;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int rem = getRemainder(num, 10);
        sum += rem;
        num = getQuotient(num, 10);
    }
    return sum;
}

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (getRemainder(num, i) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ArrayA[n], ArrayB[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ArrayA[i]);
    }

    // Calculate sum of digits for each number
    for (int i = 0; i < n; i++) {
        ArrayB[i] = sumOfDigits(ArrayA[i]);
    }

    // Print ArrayB
    printf("Sum of digits array (B): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ArrayB[i]);
    }
    printf("\n");

    // Print only prime numbers from ArrayB
    int found = 0;
    printf("Prime numbers in the sum array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(ArrayB[i])) {
            printf("%d ", ArrayB[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No prime numbers found in the digit sums.");
    }

    return 0;
}

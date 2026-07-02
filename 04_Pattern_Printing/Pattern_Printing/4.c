#include <stdio.h>

void main() {
    int n;

    // Get input from the user
    printf("Enter an odd number: ");
    scanf("%d", &n);

    // Ensure input is odd
    if(n % 2 == 0) {
        printf("Please enter an odd number.\n");
      //return 1;
    }

    // Hourglass pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // print * at borders or diagonal positions
            if (i == 0 || i == n - 1 || j == i || j == n - i-1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    //return 0;
}

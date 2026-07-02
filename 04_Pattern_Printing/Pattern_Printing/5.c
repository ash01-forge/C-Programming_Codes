#include <stdio.h>

int main() {
    int n, i, max, second;

    printf("Enter the number of integer inputs: ");
    scanf("%d", &n);

    int a[n]; 

    printf("Enter the array inputs:");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = second = a[0]; // Initialize both to first element

    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    if(max == second) {
        printf("All numbers are the same or no second largest.\n");
    } else {
        printf("Second largest number is: %d\n", second);
    }

    return 0;
}

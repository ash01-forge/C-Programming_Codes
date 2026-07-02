#include <stdio.h>

int main() {
    int i, j, n,a;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a=1;
        for (j = 1; j <= i; j++) {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
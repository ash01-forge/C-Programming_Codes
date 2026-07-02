#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[20][20];
    int sum = 0;
    int mid = (n / 2)+1;

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Add boxed values only
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && i <= mid||i==mid &&i>=mid ) {
                // full row for top, bottom, and middle
                sum += a[i][j];
            } else if (j == 0 && j <= mid ||j==mid&&j>=mid) {
                // side values only for other rows
                sum += a[i][j];
            }
            else if(i==mid||j==mid){
                sum += a[i][j];
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}

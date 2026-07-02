#include <stdio.h>
int main()
{
    int n = 3;
    int arr[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int det = (arr[0][0] * (arr[1][1] * arr[2][2]) - arr[2][1] * arr[1][2]) - (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));
printf("Determinant: %d",det);
    return 0;
}
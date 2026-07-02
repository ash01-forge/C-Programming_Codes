#include <stdio.h>
void reverse(int m,int b[m]){
    
     for ( int i = m-1; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }
    return ;
    
}
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(n,a);
    
        return 0;
}
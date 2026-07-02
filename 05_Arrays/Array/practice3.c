#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++){
    for ( j = 1; j <= n; j++)
    {
      if (i==1||i==n||j==1||j==2)
      {
        printf("*");
      }
      else printf(" ");
    }
   
    printf("\n");
}
    
 
    
    
    return 0;

}
#include <stdio.h>
int main()
{
    int a,b,n;
    printf("Enter the number of player-1:\n");
    scanf("%d", &a);
    printf("Enter How Many Choice(s) You Want To Give:\n");
    scanf("%d", &n);
    
    while (n>0)
    {
        printf("Enter the number of player-2:\n");
        scanf("%d", &b);

        if (a != b)
        {
            n--;
            printf("Wrong,%d Choice(s) Left!\n", n);
        }
        else
        {
            printf("Right, player 2 wins!");
            break;
        }
       if (n==0)
       {
        printf("Player-1 Wins!");
        break;
       }
       
    }
    return 0;
}
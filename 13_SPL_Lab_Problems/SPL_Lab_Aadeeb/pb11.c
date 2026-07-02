#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number of player 1:\n");
    scanf("%d",&a);
    printf("Enter the number of player 2:\n");
    scanf("%d",&b);
    if(b==a)
        {printf("Right,player 2 wins!\n");
    return 0;
    }else printf("Wrong,2 chance(s) left!\n");
    scanf("%d",&c);


    if(c==a)
        {printf("Right,player 2 wins!\n");
        return 0;
    }else printf("Wrong,1 chance(s) left!\n");
    scanf("%d",&d);

    if(d==a)
        {printf("Right,player 2 wins!\n");
        return 0;
    }else {printf("Wrong,0 chance(s) left!\n");
    printf("Player 1 wins!\n");
    }
    return 0;
}

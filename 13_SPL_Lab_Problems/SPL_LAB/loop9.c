#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d %d",&x,&y);
    for(i=0;i==x;i++)
    {
        if(x<y)
        {
            (i++);
            printf("%d,",x*x);
        }



       else if(x>y){

            (i--);

        printf("%d,",x*x);
}

    else if(x==y)
        printf("Reached!");

}
}

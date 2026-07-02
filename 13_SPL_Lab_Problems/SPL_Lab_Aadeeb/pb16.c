#include<stdio.h>
int main()
{
    char cat;
    int ex,fam;
    float inc;
    printf("Enter the Category(X,Y,Z)\nYears of work experience\nNumber of family members\nTotal family income per month\n");
    scanf("%c%d%d%f",&cat,&ex,&fam,&inc);
if (cat=='X'||ex>12&&fam>5||inc<1000.50)
{
    printf("Will Receive the Bonus");
}
else if (cat=='Y'&&ex>12&&fam>8&&inc<1100.78)
{
    printf("Will Receive the Bonus\n");
}
else if (cat=='Z'&&ex>12&&fam>8&&inc<1100.78)
{
    printf("Will Receive the Bonus\n");
}
else{
    printf("Will Not Receive the Bonus");
}

    return 0;
}
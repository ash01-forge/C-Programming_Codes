#include <stdio.h>

struct triangle
{

    int id, base, height;
};
int area(struct triangle n)
{
    int a = (n.base * n.height) / 2;
    return a;
}

int main()
{
    struct triangle t1;
    scanf("%d", &t1.id);
    scanf("%d", &t1.base);
    scanf("%d", &t1.height);
    struct triangle t2;
    scanf("%d", &t2.id);
    scanf("%d", &t2.base);
    scanf("%d", &t2.height);
    struct triangle t3;
    scanf("%d", &t3.id);
    scanf("%d", &t3.base);
    scanf("%d", &t3.height);
    int res1 = area(t1);
    int res2 = area(t2);
    int res3 = area(t3);
    printf("Area of %d=%d\n", t1.id, res1);
    printf("Area of %d=%d\n", t2.id, res2);
    printf("Area of %d=%d\n", t3.id, res3);

    return 0;
}
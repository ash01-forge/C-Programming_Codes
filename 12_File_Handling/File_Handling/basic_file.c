#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sample.txt", "w");
    fprintf(fp, "1 zahid\n");
    fprintf(fp, "2 Tanvir\n");
    fprintf(fp, "3 Akif");
    return 0;
}
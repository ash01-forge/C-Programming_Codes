#include <stdio.h>
int main()
{
    FILE *fin, *fout;
    int num[5], sum = 0, i;
    fin = fopen("Sample.txt", "r");
    if (fin == NULL)
    {
        printf("File not found!");
        return 1;
    }
    for (i = 0; i < 5; i++)
    {
        fscanf(fin, "%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (num[i] % 2 == 0 && num[i] % 4 == 0)
        {
            sum = sum + num[i];
        }
    }
    fout = fopen("Output.txt", "w");
    if (fout == NULL)
    {
        printf("File not created!");
        return 1;
    }
    fprintf(fout, "Sum:%d", sum);
    fclose(fin);
    fclose(fout);
    printf("Stored successfully in Output.txt");
    return 0;
}
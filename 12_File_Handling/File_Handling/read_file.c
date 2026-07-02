#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100];
    FILE*fp;
    fp=fopen("input.txt","r");
    if (fp==NULL)
    {
        printf("File doesen't exist");
    }
    else{
        fgets(s1,sizeof(s1),fp);
        fgets(s2,sizeof(s2),fp);
        fgets(s3,sizeof(s3),fp);
        fclose(fp);
        printf("%s",s1);
        printf("%s",s2);
        printf("%s",s3);

    }
    
  
    return 0;
}
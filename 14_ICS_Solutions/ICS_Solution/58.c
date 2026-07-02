#include<stdio.h>
int main()
{
    double bill1,bill2,unit;
    scanf("%lf",&unit);

     //bill2=bill1+(bill1*.20);
     if (unit<=50){
        bill1=(unit*0.50);
        bill2=bill1+(bill1*.20);
        printf("%.2lf",bill2);
     }
        else if (unit<=150){
        bill1=(50*0.50)+((unit-50)*0.75);
        bill2=bill1+(bill1*.20);
        printf("%.2lf",bill2);
        }
        else if (unit<=250){
        bill1=50*0.50+(100*0.75)+((unit-150)*1.20);
        bill2=bill1+(bill1*.20);
        printf("%.2lf",bill2);
        }
        else if (unit>250){
            bill1=50*0.50+(100*0.75)+(100*1.20)+(unit-250)*1.50;
            bill2=bill1+(bill1*.20);
            printf("%.2lf",bill2);
        }
            else{
                printf("Enter valid input");

            }



    return 0;
}

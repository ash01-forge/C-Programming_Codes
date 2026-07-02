#include<stdio.h>
float getSumMean(float marks[],int N,int type){
   
    float sum=0;
    for (int i = 0; i < N; i++)
    {
        sum=sum+marks[i];
    }
    float mean;
    mean=sum/N;
    if (type==1)
    {
        return sum;
    }
    if (type==2)
    {
        return mean;
    }
    
    
}
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    float A[n];
     for (int i = 0; i < n; i++)
    {
        scanf("%f",&A[i]);
    }
    int type;
    printf("Enter the type:");
    scanf("%d",&type);
    float result=getSumMean(A,n,type);
    if (type==1)
    {
        printf("Sum=%.2f",result);
    }
    else if (type==2)
    {
        printf("Mean=%.2f",result);
    }
    else printf("Invalid type!!");


    return 0;
}
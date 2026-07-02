#include <stdio.h>
int updateBalance(float arr[], int identifier, int transaction, float amount)
{
    if (transaction == 1)
    {

        if (amount > arr[identifier])
        {
            printf("Not sufficient balance");
            return 0;
        }
        else
        {

            printf("Updated balance:%f", arr[identifier] - amount);
        }
    }
    else if (transaction == 2)
    {

        printf("Updated balance:%f", arr[identifier] + amount);
    }
    else
    {
        printf("Invalid transaction type\n");
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of customer's amount you want to input");
    scanf("%d",&n);
    float brr[n];
    int i;
    printf("Enter the initial balances of the customers");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &brr[i]);
    }
    int identifier, transaction;
    float amount;
    printf("Enter the custome's unique identifier:");
    scanf("%d", &identifier);
    printf("Enter the transaction choice\n1.Withdrawal\n2.Deposit:");
    scanf("%d", &transaction);
    printf("Enter the amount:", transaction);
    scanf("%f", &amount);
    updateBalance(brr,identifier,transaction,amount);

    return 0;
}

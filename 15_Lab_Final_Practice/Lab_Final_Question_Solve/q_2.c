#include <stdio.h>
struct Train
{
    char name[100];
    int tickets;
    float rating;
};
void addTrain(struct Train listOfTrains[], int numOfTrains)
{
    printf("Name of the train");
    getchar();
    gets(listOfTrains[numOfTrains].name);
    printf("Total tickets:");
    scanf("%d", &listOfTrains[numOfTrains].tickets);
    printf("Ratinnngs:");
    scanf("%f", &listOfTrains[numOfTrains].rating);
    return;
}
void mostPopularTrain(struct Train listOfTrains[], int numOfTrains)
{
    int i, highest = 0, index = 0;
    for (i = 0; i < numOfTrains; i++)
    {
        if (listOfTrains[i].tickets > highest)
        {
            highest = listOfTrains[i].tickets;
            index = i;
        }
    }
    printf("Name of the most popular train:%s\n", listOfTrains[index].name);
    return;
}
void displayAllTrains(struct Train listOfTrains[], int numOfTrains)
{
    for (int i = 0; i < numOfTrains; i++)
    {
        printf("Name of the train: %s\n", listOfTrains[i].name);
        printf("Total tickets:%d\n", listOfTrains[i].tickets);
        printf("Ratings:%.1f\n", listOfTrains[i].rating);
    }
    return;
}
int main()
{
    struct Train listOfTrains[100];
    int numOfTrains = 0;
    int choice;
    while (1)
    {
        printf("1.Add a train\n2.Most Popular Train\n3.List of the trains\n4.Exit\n\n");
        printf("Enter you choice:");
        scanf("%d", &choice);
        printf("\n");
        if (choice == 1)
        {
            addTrain(listOfTrains, numOfTrains);
            numOfTrains++;
        }
        else if (choice == 2)
        {
            mostPopularTrain(listOfTrains, numOfTrains);
        }
        else if (choice == 3)
        {
            displayAllTrains(listOfTrains, numOfTrains);
        }
        else if (choice == 4)
        {
            break;
        }
        else
            printf("Enter a valid choice!");
    }

    return 0;
}
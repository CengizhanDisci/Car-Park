#include <stdio.h>
#include <stdlib.h>

struct carFeatures
{
    char model[17];
    char colour[10];
    char plaque[12];


} car[5];

struct time
{
    int hours;
    int minutes;
    int seconds;
} time[5];

void addByCar()
{
    int arabaAdedi=0;
    for (int i=1; i<1000; i++)                               //1000 vehicle capacity
    {

        printf("%d. Write the car information:  \n",i);     //Getting vehicle information
        printf("Write the model: \n");
        scanf("%s",&car[i].model);
        printf("Write the colour:  \n");
        scanf("%s",&car[i].colour);
        printf("Write the license plaque:   \n");
        scanf("%s",&car[i].plaque);
        printf("Write the hour of entry: \n");
        scanf("%d",&time[i].hours);
        printf("Write the minute of entry:  \n");
        scanf("%d",&time[i].minutes);
        printf("Write the second of entry:  \n");
        scanf("%d",&time[i].seconds);
        arabaAdedi++;

            printf("enter the parking lot\n\n");


    }


}


void ListCars()                       //List of Cars
{
    printf("\t\tList of Cars\n");
    for(int i=1; i<1000; i++)
    {
        printf("%d. car: %s - %s - %s - %d:%d:%d \n",i,car[i].model,car[i].colour,car[i].plaque,time[i].hours,time[i].minutes,time[i].seconds);
    }
}
int main()
{
    addByCar();
    ListCars();

    return 0;
}

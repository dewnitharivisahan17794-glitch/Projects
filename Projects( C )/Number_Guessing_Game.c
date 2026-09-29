#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int guess = 0;
    int attemps = 0;
    int min = 1;
    int max= 100;
   
    int random = (rand() % (max -  min + 1) + min);
    printf("***NUMBER GUESSING GAME***\n");

    do
    {
        printf("Enter A random number Between 1 - 100 : ");
        scanf("%d", &guess);

        if (guess > random)
            printf("Too high!\n");
        else if (guess < random)
            printf("Too low!\n");
            
        attemps++;
        
    } while (random != guess);

    printf("You have got correct answer in %d attemps!", attemps);
    

}
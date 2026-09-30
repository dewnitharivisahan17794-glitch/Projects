#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computerChoise();
int userchoise();
void choosewinner(int A , int B)
{
    if((A == 1 && B == 2) || (A == 2 && B == 3) || (A == 3 && B == 1))
    {
        printf("You WIN!");
    }
    else if(A == B)
    {
        printf("You TIE!");
    }
    else
    {
        printf("You LOSE!");
    }

}

int main()
{
    printf("***ROCK PAPER SISSORS GAME***\n");
    int User_Choise = userchoise();
    int Computer_Choise = computerChoise();
    switch (User_Choise)
    {
    case 1:
        printf("You chose ROCK\n");
        break;
    
    case 2:
        printf("You chose PAPER\n");
        break;
    
    case 3:
        printf("You chose SISSORS\n");
        break;
    }
     switch (Computer_Choise)
    {
    case 1:
        printf("Computer chose ROCK\n");
        break;
    
    case 2:
        printf("Computer chose PAPER\n");
        break;
    
    case 3:
        printf("Computer chose SISSORS\n");
        break;
    }
    choosewinner(Computer_Choise, User_Choise);
}

int userchoise()
{
    int choise = 0;
      do{
        printf("Rock = 1\n");
        printf("Paper = 2\n");
        printf("Sissors = 3\n");
        printf("Enter Your Choise as a Number: ");
        scanf("%d", &choise);
        }while(choise < 1 || choise > 3);
    
}

int computerChoise()
{
    srand(time(NULL));
    return (( rand() % 3 ) + 1);
}
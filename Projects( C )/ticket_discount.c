#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00;
    bool IsStudent = true;
    bool IsSenior = true;

    if(IsStudent)
    {
        if(IsSenior) //use of nested if.
        {
            printf("You got senior discount of 20%\n");
            printf("You got student discount of 10%\n");
            price *=0.7;
        }

        else
        {
            printf("You got student discount of 10%\n");
            price *=0.9;
        }
        
    }
    else
    {
        printf("You got student discount of 20%\n");
        price *=0.8;
    }
    
   printf("Your Ticket Price is : $%.2f\n" ,price);  
}
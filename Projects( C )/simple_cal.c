#include <stdio.h>

int main()
{
    char operator = '\0';
    double num1 = 0.00;
    double num2 = 0.00;
    double result = 0.00;

    printf("Enter First Number :");
    scanf("%lf", &num1);

    printf("Enter Operator(+,-,* or /) :");
    scanf(" %c", &operator);

    printf("Enter Second Number :");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Answer : %lf", result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("Answer : %lf", result);
        break;
    
    case '*':
        result = num1 * num2;
        printf("Answer : %lf", result);
        break;

    case '/':
        if(num2 == 0)
        {
            printf("You Can't Divide by Zero!\n");
            printf("Not Define!\n");
        
        }
        else
        {
            result = num1 / num2;
            printf("Answer : %lf", result);
            break;
        }

    }


}
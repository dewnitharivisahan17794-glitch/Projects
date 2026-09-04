#include <stdio.h>
#include <string.h>

int main(){
    char food[30]="";
    float price = 0.0f;
    int quentity = 0;
    float total = 0.0f;
    char currency = '$' ;

    
    printf("What would you like to eat: ");
    fgets(food,sizeof(food),stdin);
    food[strlen(food)-1] = '\0';

    printf("Each price of %s: " , food);
    scanf("%f",&price);

    printf("How many do you want to buy: ");
    scanf("%d",&quentity);

    total = price * quentity;

    printf("\nYou have brought %d %s\n", quentity, food);

    printf("%c%.2f", currency, total);
}
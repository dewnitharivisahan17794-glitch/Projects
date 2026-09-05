#include <stdio.h>
#include <math.h>

int main(){
    float Principal = 0.0f;
    float Interest = 0.0f;
    int years = 0;
    int Compounding_periods = 0;
    float Ammount = 0.0f;

    printf("Principal is: ");
    scanf("%f",&Principal);

    printf("Years: ");
    scanf("%d",&years);

    printf("interest Rate is: ");
    scanf("%f",&Interest);
    Interest = Interest/100;

    printf("compounding period is: ");
    scanf("%d",&Compounding_periods);

    Ammount = Principal * pow((1+(Interest/Compounding_periods)),Compounding_periods*years);

    printf("\nInterest Is : %.2f",Ammount);
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    float value1 = 0.0f;
    float value2 = 0.0f;
    float value3 = 0.0f;
    char unit1[30] = "";
    char unit2[30] = "";

    printf("(1.unit)< convert to >(2.unit)\n");
    printf("\n gram = g\n kilogram = kg\n pound = lbs \n");

    printf("\nEnter Unit 1: ");
    fgets(unit1,sizeof(unit1),stdin);
    unit1[strlen(unit1)-1] = '\0';
    
    printf("Enter Unit 2: ");
    fgets(unit2,sizeof(unit2),stdin);
    unit2[strlen(unit2)-1] = '\0';

    printf ("Enter %s value: ", unit1);
    scanf ("%f", &value1);

    if( strcmp(unit1, "g") == 0 || strcmp(unit1,"gram") == 0 &&  strcmp(unit2, "kg") == 0 || strcmp(unit2, "kilogram") == 0)
    {
        value3 = value1/1000;
        printf("Answer : %.3f%s",value3, unit2);
    }
    
    else if( strcmp(unit1, "g") == 0 || strcmp(unit1,"gram") == 0 &&  strcmp(unit2, "lbs") == 0 || strcmp(unit2, "pounds") == 0)
    {
        value3 = value1/453.6;
        printf("Answer : %.3f%s",value3, unit2);
    }

    else if( strcmp(unit1, "kg") == 0 || strcmp(unit1,"kilogram") == 0 &&  strcmp(unit2, "g") == 0 || strcmp(unit2, "gram") == 0)
    {
        value3 = value1 * 1000;
        printf("Answer : %.3f%s",value3, unit2);
    }

    else if( strcmp(unit1, "kg") == 0 || strcmp(unit1,"kilogram") == 0 &&  strcmp(unit2, "lbs") == 0 || strcmp(unit2, "pounds") == 0)
    {
        value3 = value1/2.205;
        printf("Answer : %.3f%s",value3, unit2);
    }

    else if( strcmp(unit1, "lbs") == 0 || strcmp(unit1,"pounds") == 0 &&  strcmp(unit2, "g") == 0 || strcmp(unit2, "gram") == 0)
    {
        value3 = value1 * 453.6;
        printf("Answer : %f%s",value3, unit2);
    }

    else if( strcmp(unit1, "lbs") == 0 || strcmp(unit1,"pounds") == 0 &&  strcmp(unit2, "kg") == 0 || strcmp(unit2, "kilogram") == 0)
    {
        value3 = value1 * 2.205;
        printf("Answer : %f%s",value3, unit2);
    }
    else
    {
        printf("Unable to calculate , please use above units.");
    }
}


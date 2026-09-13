#include <stdio.h>

int main()
{
    int Dayofweek = 0;

    printf("Enter Number Of the Day : ");
    scanf("%d", &Dayofweek);
  /*
    if (Dayofweek = 1)
    {
        printf("Today is Monday");
    }

    else if (Dayofweek = 2)
    {
        printf("Today is Tuesday");
    }

    else if (Dayofweek = 3)
    {
        printf("Today is Wednesday");
    }

    else if (Dayofweek = 4)
    {
        printf("Today is Thursday");
    }

    else if (Dayofweek = 5)
    {
        printf("Today is Friday");
    }

    else if (Dayofweek = 6)
    {
        printf("Today is Saturday");
    }

    else if (Dayofweek = 7)
    {
        printf("Today is Sunday");
    }
    
  */

  switch (Dayofweek) // this is the method for above code.
  {
  case 1:
    printf("Today is Monday");
    break; // if i didn't use break to break the code, code will run until pass through default.

  case 2:
    printf("Today is Tuesday");
    break;

  case 3:
    printf("Today is Wednesday");
    break;

  case 4:
    printf("Today is Thursday");
    break;

  case 5:
    printf("Today is Friday");
    break;

  case 6:
    printf("Today is Saturday");
    break;

  case 7:
    printf("Today is Sunday");
    break;

  default:
    printf("Please enter number between (1 - 7)");
    break;
  }
}
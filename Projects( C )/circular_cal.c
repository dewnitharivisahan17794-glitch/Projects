#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.1459;
    double peremeter = 0.0;
    double Surface_Area = 0.0;
    double volume =0.0;

    printf("Enter radius: ");
    scanf("%lf",&radius);

    area = PI * pow(radius,2);
    peremeter = 2*PI*radius;
    Surface_Area = 4*PI*pow(radius,2);
    volume = 4/3 * PI * pow(radius,3);

    printf("Area : %lf\n",area);
    printf("peremeter : %lf\n",peremeter);
    printf("Surface Area : %lf\n",Surface_Area);
    printf("Volume : %lf\n",volume);

}
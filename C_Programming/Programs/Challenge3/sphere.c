#include<stdio.h>
#include<stdlib.h>

/**
 * == Sphere ==
 * 
 * Calculare surface and volume of a sphere
 * 
 * Goals:
 *   - prompt user to enter the radius
 *   - calculate the surface area ===> A = 4 pie r^2
 *   - calculate the enclosed volume ===> V = (4/3) pie r^3
 *   - print the radius and the results in decimal volume (2 digit of precision)
 *   - print the radius and the results in scientific notation (3 digits of precision)
 *   - check the results
 */

int main()
{
    printf("\n=== Sphere ===\n\n");

    double radius, area, volume;
    const double pi = 3.14159265359;

    printf("Enter radius of sphere : ");
    scanf("%lf", &radius);

    area = 4 * pi * (radius * radius);
    volume = (4.0/3) * pi * (radius * radius * radius);

    printf("Radius of sphere: %.2f\n", radius);
    printf("Area of sphere in decimal 2 percision: %.2f\n", area);
    printf("Area of sphere in scientific 3 percision: %.3e\n", area);

    printf("Volume of sphere in decimal 2 percision: %.2f\n", volume);
    printf("Volume of sphere in scientific 3 percision: %.3e\n", volume);

    printf("\n\n== END ==\n\n");
    return EXIT_SUCCESS;
}
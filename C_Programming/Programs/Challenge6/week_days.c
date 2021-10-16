#include<stdio.h>
#include<stdlib.h>

/**
 * == Days of the week ==
 * 
 * Goals:
 *  - declare and enum that lists all the days of the week
 *  - make sure it has the value 1 on Monday
 *  - print Monday and Sunday value
 *  - get user input and store it as a day enum
 *  - print a string with name of the day
 */

typedef enum{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} DOW;

int main()
{
    printf("\n\n== Days of the week ==\n\n");
    DOW days;

    printf("Monday/Sunday : %d/%d \n", Monday, Sunday);

    printf("Enter day of the week: ");
    scanf("%u", &days);

    switch (days)
    {
    case Monday:
        printf("Day is Monday\n");
        break;
    case Tuesday:
        printf("Day is Tuesday\n");
        break; 
    case Wednesday:
        printf("Day is Wednesday\n");
        break; 
    case Thursday:
        printf("Day is Thursday\n");
        break; 
    case Friday:
        printf("Day is Friday\n");
        break; 
    case Saturday:
        printf("Day is Saturday\n");
        break; 
    case Sunday:
        printf("Day is Sunday\n");
        break; 
    default:
        printf("Unknown day entered\n");
        break;
    }
    
    printf("\n\n== END ==\n\n");
    return EXIT_SUCCESS;
}
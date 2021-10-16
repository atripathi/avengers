#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * == Even Odd ==
 * 
 * Goals:
 *  - prompt user to enter a positive integer number
 *  - if number is negative, print a warning and exit
 *  - check if number is even or odd and store the result
 *    in a boolean variable using the ternary operator
 *  - print whether the number is even or odd 
 */

int main()
{
    printf("\n== Even Odd ==\n");
    int num;
    bool isEven;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Warning: Negative number %d entered...exiting\n", num);
        return EXIT_FAILURE;
    }
    isEven = (num % 2 == 0)? true : false;

    if(isEven) {
        printf("Number is even number: %d\n", num);
    }
    else {
       printf("Number is odd number: %d\n", num); 
    }

    printf("\n== END ==\n");
    return EXIT_SUCCESS;
}
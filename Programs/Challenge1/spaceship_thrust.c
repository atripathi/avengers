#include <stdio.h>
#include <stdlib.h>

typedef enum {
    THRUST_NONE    = 0,
    THRUST_LOW     = 5,
    THRUST_MEDIUM  = 9,
    THRUST_HIGH    = 12,
    THRUST_MAXIMUM = 20,
} SpaceshipThrust;

int main()
{
    SpaceshipThrust thrust;
    printf("\n=== Spaceship Thrust ==\n");
    
    // setting thrust to none
    thrust = THRUST_NONE;
    printf("Ready to go, setting thrust to : \t\t%d\n", thrust);
    // setting thrust to maximum
    thrust = THRUST_MAXIMUM;
    printf("Take of level, setting thrust to : \t\t%d\n", thrust);
    //setting thrust to medium
    thrust = THRUST_MEDIUM;
    printf("Entering into ionosphere, setting thrust to : \t%d\n", thrust);
    // setting thrust to low
    thrust = THRUST_LOW;
    printf("Traveling to deep space, setting thrust to : \t%d\n", thrust);


    return EXIT_SUCCESS;
}

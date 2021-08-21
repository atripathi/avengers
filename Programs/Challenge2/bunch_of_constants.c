#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int moonLanding = 1969;
    const double speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned hexaSecret = 51966U;

    printf("\n=== Bunch of Constants ===\n");
    printf("%10d | moonLanding 10 characters width, padded with spaces\n", moonLanding);
    printf("%010d | moonLanding 10 characters width, padded with zeros\n", moonLanding);
    printf("%10.0f | speedOfLight with no percision\n", speedOfLight);
    printf("%10.3e | speedOfLight with three digit percision and in scientific notation\n", speedOfLight);
    printf("%10.2f | Pi with two digit percision\n", pi);
    printf("%+10.1e | Pi with signed one digit percision and in scientific notation\n", pi);
    printf("    0x%X | hexaDead in uppercase hex format\n", hexaDead);
    printf("    %6u | hexaDead in 6 digit\n", hexaDead);
    printf("%10x | HexaSecret in lowercase hexa format\n", hexaSecret);
    printf("\n=== END ===\n");

    return EXIT_SUCCESS;
}

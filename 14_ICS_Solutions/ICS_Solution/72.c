#include <stdio.h>
#include <math.h>

int main() {
    // Given values
    double x0 = 5.0;      // Initial displacement in cm
    double gamma = 0.3;   // Damping coefficient in s^(-1)
    double omega = 2.0;   // Angular frequency in rad/s
    double t = 3.0;       // Time in seconds

    // Compute displacement using the given formula
    double x_t = x0 * exp(-gamma * t) * cos(omega * t);

    // Display the result
    printf("Displacement after %.1f seconds: %.5lf cm\n", t, x_t);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    double lambda_green = 530e-9;
    double lambda_red = 700e-9;
    double theta_green = 65.0 * M_PI / 180.0;
    int m_green = 3;
    int m_red = 2;
    double d;
    double theta_red;

    d = (m_green * lambda_green) / sin(theta_green);

    double sin_theta_red = (m_red * lambda_red) / d;

    theta_red = asin(sin_theta_red);

    theta_red = theta_red * 180.0 / M_PI;

    printf("The angle for the second-order bright spot for red light is approximately: %.1f degrees\n", theta_red);

    return 0;
}

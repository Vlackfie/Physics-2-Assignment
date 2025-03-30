#include <stdio.h>
#include <math.h>
int main() {
    double lambda, m, a1, a2, a3, theta1, theta2, theta3;
    int color_code;

    printf("Enter the wavelength (lambda) in nm (380-750): ");
    scanf("%lf", &lambda);

    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter the order of diffraction (m): ");
    scanf("%lf", &m);

    printf("Enter the first slit width (a1) in um: ");
    scanf("%lf", &a1);
    printf("Enter the second slit width (a2) in um: ");
    scanf("%lf", &a2);
    printf("Enter the third slit width (a3) in um: ");
    scanf("%lf", &a3);

    theta1 = asin(m * (lambda * 1e-3) / a1);
    theta2 = asin(m * (lambda * 1e-3) / a2);
    theta3 = asin(m * (lambda * 1e-3) / a3);

    theta1 = theta1 * 180 / M_PI;
    theta2 = theta2 * 180 / M_PI;
    theta3 = theta3 * 180 / M_PI;

    if (theta1 > theta2 && theta1 > theta3) {
        printf("Slit 1 (a1) bent the light the most with an angle of %.2f degrees.\n", theta1);
    } else if (theta2 > theta1 && theta2 > theta3) {
        printf("Slit 2 (a2) bent the light the most with an angle of %.2f degrees.\n", theta2);
    } else {
        printf("Slit 3 (a3) bent the light the most with an angle of %.2f degrees.\n", theta3);
    }

    if (lambda >= 380 && lambda <= 450) {
        color_code = 1;
    } else if (lambda > 450 && lambda <= 485) {
        color_code = 2;
    } else if (lambda > 485 && lambda <= 500) {
        color_code = 3;
    } else if (lambda > 500 && lambda <= 565) {
        color_code = 4;
    } else if (lambda > 565 && lambda <= 590) {
        color_code = 5;
    } else if (lambda > 590 && lambda <= 625) {
        color_code = 6;
    } else {
        color_code = 7;
    }

    printf("The color of the light is: ");
    switch (color_code) {
        case 1: printf("Violet\n"); break;
        case 2: printf("Blue\n"); break;
        case 3: printf("Cyan\n"); break;
        case 4: printf("Green\n"); break;
        case 5: printf("Yellow\n"); break;
        case 6: printf("Orange\n"); break;
        case 7: printf("Red\n"); break;
    }

    return 0;
}



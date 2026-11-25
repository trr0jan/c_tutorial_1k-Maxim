#include <app.h>

#define PI 3.14159265
#define FUNC_Z(x, y) (sqrt((x) * ((y) + 1)) / ((x) - (y)))

int main() 
{
    // Табуляція функції y = f(x)
    double a = -PI, b = PI, h = 0.1;
    double y, min_y, max_y;
    int first_y = 1;

    printf(" TABULYATSIYA y = f(x) \n");
    printf("   x    |    y\n");
    printf("-------------------\n");

    for (double x = a; x <= b + 0.0001; x += h) {
        if (x <= -PI / 2) {
            y = sin(2 * x);
        }
        else if (x > -PI / 2 && x < PI / 2) {
            y = fabs(x - PI / 2);
        }
        else {
            y = (x - 1) / (2 + sqrt(x));
        }

        printf("%7.3f | %8.4f\n", x, y);

        if (first_y == 1) {
            min_y = y;
            max_y = y;
            first_y = 0;
        }
        else {
            if (y < min_y) min_y = y;
            if (y > max_y) max_y = y;
        }
    }

    printf("-------------------\n");
    printf("Min y = %.4f, Max y = %.4f\n\n", min_y, max_y);


    // Табуляція функції z = f(x, y)

    double ax = -3.0, bx = 3.0, hx = 0.25;
    double cy = 1.0, dy = 2.0, hy = 0.15;
    double z, min_z, max_z;
    int first_z = 1;

    printf(" TABULYATSIYA z = f(x, y) \n");
    printf("   x    |    y    |    z\n");
    printf("-----------------------------\n");

    for (double x = ax; x <= bx + 0.0001; x += hx) {
        for (double y_val = cy; y_val <= dy + 0.0001; y_val += hy) {

            if (x * (y_val + 1) >= 0 && fabs(x - y_val) > 0.0001) {
                z = FUNC_Z(x, y_val);
                printf("%7.2f | %7.2f | %8.4f\n", x, y_val, z);

                if (first_z == 1) {
                    min_z = z;
                    max_z = z;
                    first_z = 0;
                }
                else {
                    if (z < min_z) min_z = z;
                    if (z > max_z) max_z = z;
                }
            }
            else {
                printf("%7.2f | %7.2f | ne isnuye\n", x, y_val);
            }
        }
    }

    printf("-----------------------------\n");
    printf("Min z = %.4f, Max z = %.4f\n", min_z, max_z);

    return 0;
}
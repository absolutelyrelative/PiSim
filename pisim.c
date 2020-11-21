#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float rand_float() {    //generate pseudo-random number between 0 and 1
    return rand() / (float) RAND_MAX;
}

float Generate_Pi(float x_boundary, float y_boundary, float circle_radius, unsigned int tries) {
    srand(time(NULL));
    float dots_in_square = 0;
    float dots_in_circle = 0;
    float x, y, d, estimated_area;
    int ctr = 0;

    while (ctr < tries) {
        x = rand_float();
        y = rand_float();
        d = sqrtf(powf((x - x_boundary / 2), 2.0) + powf((y - y_boundary / 2), 2.0));

        if (d < circle_radius) {
            dots_in_circle = dots_in_circle + 1.0;
        }

        dots_in_square = dots_in_square + 1.0;  //A dot in the circle will always be a dot in the square

        ctr++;
    }
    estimated_area = 4 * (dots_in_circle / dots_in_square);

    return estimated_area;

}

int main() {
    printf("Hello, World!\n");

    float pi = Generate_Pi(1, 1, 0.5, 50000);

    printf("%f", pi);
    return 0;
}

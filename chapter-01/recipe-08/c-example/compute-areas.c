#include <stdlib.h>
#include <stdio.h>

#include "geometry_circle.h"
#include "geometry_polygon.h"
#include "geometry_rhombus.h"
#include "geometry_square.h"

int main(int argc, char *argv[])
{
    double radius = 2.5293;
    double A_circle = circle(radius);
    printf("A circle of radius %g has an area of %g.\n", radius, A_circle);

    int nSides = 19;
    double side = 1.29312;
    double A_polygon = polygon(nSides, side);
    printf("A regular polygon of %d sides of length %g has an area of %g.\n",
            nSides, side, A_polygon);

    double d1 = 5.0;
    double d2 = 7.8912;
    double A_rhombus = rhombus(d1, d2);
    printf("A rhombus of major diagonal %g and minor diagonal %g has an area of %g.\n",
            d1, d2, A_rhombus);

    double l = 10.0;
    double A_square = square(l);
    printf("A square of length %g has an area of %g.\n", l, A_square);

    return EXIT_SUCCESS;
}
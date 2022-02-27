#include <math.h>
#include "geometry_polygon.h"

#define M_PI 3.14159265358979323846

double polygon(int nSides, double side) 
{
    double perimeter = nSides * side;
    double apothem = side / (2.0 * tan(M_PI / nSides));
    return (perimeter * apothem) / 2.0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare variable
    double radius, surface_area;
    const double pi = 3.142;

    //calculation of the surface_area
    printf("Enter the radius of your sphere: ");
    scanf("%lf", &radius);
    surface_area = 4 * pi * radius * radius;
    //The result
    printf("The surface area of the sphere is: %.2lf\n", surface_area);

    return 0;
}

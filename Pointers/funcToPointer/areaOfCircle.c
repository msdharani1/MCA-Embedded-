#include <stdio.h>

int main()
{
    float radius, area;
    float PI = 3.14159;
    float *ptrRadius = &radius, *ptrArea = &area;

    printf("Enter the radius of the circle: ");
    scanf("%f", ptrRadius);

    *ptrArea = PI * (*ptrRadius) * (*ptrRadius);

    printf("The area of the circle is: %.2f\n", *ptrArea);

    return 0;
}

/* output
    Enter the radius of the circle: 21
    The area of the circle is: 1385.44
*/
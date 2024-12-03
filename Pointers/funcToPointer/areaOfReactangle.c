#include <stdio.h>

int main()
{
    float length, width, area;
    float *ptrLength = &length, *ptrWidth = &width, *ptrArea = &area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", ptrLength);
    printf("Enter the width of the rectangle: ");
    scanf("%f", ptrWidth);

    *ptrArea = (*ptrLength) * (*ptrWidth);

    printf("The area of the rectangle is: %.2f\n", *ptrArea);

    return 0;
}

/*output
    Enter the length of the rectangle: 23
    Enter the width of the rectangle: 54
    The area of the rectangle is: 1242.00
*/
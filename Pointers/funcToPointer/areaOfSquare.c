#include <stdio.h>

int main()
{
    float side, area;
    float *ptrSide = &side, *ptrArea = &area;

    printf("Enter the side of the square: ");
    scanf("%f", ptrSide);

    *ptrArea = (*ptrSide) * (*ptrSide);

    printf("The area of the square is: %.2f\n", *ptrArea);

    return 0;
}

/*
    output:
    Enter the side of the square: 10
    The area of the square is: 100.00
*/

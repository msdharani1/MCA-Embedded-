#include <stdio.h>

int main()
{
    int num1, num2, num3, biggest;
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3, *ptrBiggest = &biggest;

    printf("Enter the first number: ");
    scanf("%d", ptr1);
    printf("Enter the second number: ");
    scanf("%d", ptr2);
    printf("Enter the third number: ");
    scanf("%d", ptr3);

    if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        *ptrBiggest = *ptr1;
    }
    else if (*ptr2 > *ptr3)
    {
        *ptrBiggest = *ptr2;
    }
    else
    {
        *ptrBiggest = *ptr3;
    }

    printf("The biggest number is: %d\n", *ptrBiggest);

    return 0;
}

/*
    output:
    Enter the first number: 10
    Enter the second number: 24
    Enter the third number: 11
    The biggest number is: 24
*/
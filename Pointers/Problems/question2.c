/*
Problem: Pointer and Array Manipulation

Write a C program that:

    Declares an integer array arr of size 5 and initializes it with the values {10, 20, 30, 40, 50}.
    Declares a pointer p and points it to the first element of the array.
    Using the pointer p:
        Print all elements of the array using pointer arithmetic (i.e., without using the array index arr[i]).
        Calculate the sum of all elements in the array.
    Sample Output:

        Array elements: 10 20 30 40 50 
        Sum of elements: 150

*/

#include <stdio.h>

int main() {
   int arr[] = {10,20,30,40,50};
   int* p = &arr;
   int sum = 0;
   int n = sizeof(arr) / sizeof(arr[0]);
   printf("Array elements: ");
   for(int j = 0; j < n; j++){
       printf("%d ", arr[j]);
   }
   printf("\n");
   for(int i = 0; i < n; i++){
       sum += p[i];
   }
   printf("Sum of elements: %d", sum);
    return 0;
}

/*
    Output:
        Array elements: 10 20 30 40 50 
        Sum of elements: 150
*/
// find the missing element in an array
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss;
    int j = 1;
    int k = 0;
    for (int i = 0; i <= n + 1; i++)
    {
        if (arr[k] != j)
        {
            miss = j;
            printf("Missing Element is %d \n", miss);
            k = k - 1;
        }
        j++;
        k++;
    }
    return 0;
}

/*
output:

Missing Element is 7
Missing Element is 11
Missing Element is 12

*/
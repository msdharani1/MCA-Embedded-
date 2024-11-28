#include <stdio.h>
int main() {
    char arr1[] = "cat";
    char arr2[] = "rat";
    char arr[20];
    int j = 0;
    for(int i = 0; i < 3; i++){
        arr[i+j] = arr1[i];
        arr[j+i+1] = arr2[i];
        j++;
    }
    printf("%s", arr);
    return 0;
}

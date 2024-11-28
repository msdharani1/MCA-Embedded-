#include <stdio.h>
int main() {
    char arr[] = "MS Dharani";
    int n = sizeof(arr) / sizeof(arr[0]);
    char arrCopy[n];
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        arrCopy[i] = temp;
    }
    printf("%s",arrCopy);
    return 0;
}

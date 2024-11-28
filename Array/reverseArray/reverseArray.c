#include <stdio.h>
int main() {
    char arr[] = "dharani";
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf("%d", n);
    for(int i = n-2; i >= 0; i--){
        printf("%c", arr[i]);
    }
    return 0;
}

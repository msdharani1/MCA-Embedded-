#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "DHARANI";
    int n = sizeof(str) / sizeof(str[0]);
    char upperStr[n];
    for(int i = 0; i < n; i++){
        upperStr[i] = tolower(str[i]);
        // upperStr[i] = toupper(str[i]);
    }
    printf("%s", upperStr);
    return 0;
}

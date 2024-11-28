#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("The value of the 'a' is %d \n", a);
    printf("The address of the 'a' is %p \n", &a);
    printf("The address of the 'a' use ptr is %p \n", ptr);
    printf("The value of the 'a' is using ptr value is %d \n", *ptr);
    printf("The address of the ptr is %p", &ptr);
    return 0;
}

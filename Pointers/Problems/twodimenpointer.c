// 2 dimentioanl array using pointer
#include <stdio.h>

int main() {
   int arr[2][3] = {{10,20,30},{40,50,60}};
   printf("%d\n",*(arr+1));
   printf("%d\n",*(arr+0));
   printf("%d\n",*(*(arr+1)+0));
   printf("%d\n",*(*(arr+0)+0));
   return 0;
}

/*
    output: 
    1792367228
    1792367216
    40
    10
*/
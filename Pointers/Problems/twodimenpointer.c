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



/*
// 2 dimentioanl array using pointer - another try
#include <stdio.h>

int main() {
   int arr[4][3] = {{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
   printf("%d\n", *(arr+0));
   printf("%d\n", *(arr+1));
   printf("%d\n", *(arr+2));
   printf("%d\n", *(arr+3));
   printf("%d\n", **(arr+0));
   printf("%d\n", **(arr+1));
   printf("%d\n", **(arr+2));
   printf("%d\n", **(arr+3));
   return 0;
}

output:

1057815392
1057815404
1057815416
1057815428
10
40
70
100


*/
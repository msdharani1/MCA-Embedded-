#include<stdio.h>
int main(){
  int n = 5;
  int l = n + 1;
  for(int i = 1; i <= n; i++){
      l--;
      for (int j = l;  j <= n; j++){
         printf("* ");
      }
      printf("\n");
  }
  printf("\n");
  return 0;
}

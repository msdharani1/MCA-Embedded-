#include<stdio.h>
int main(){
  int n;
  int i = 0;
  printf("Enter the number : ");
  scanf("%d", &n);
  while(i <= n){
    int j = n - i;
    while(j){
      printf("* ");
      j--;
    }
    printf("\n");
    i++;
  }
  return 0;
}

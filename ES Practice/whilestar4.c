#include<stdio.h>
int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int i = 1;
  int j = 1; 
  while(i<=n){
     int temp = n - 1;
     int space = temp;
     while(space <= temp){
       printf(" ");
       temp--;

     }
    while(j<=n){
      printf("* ");
     j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}

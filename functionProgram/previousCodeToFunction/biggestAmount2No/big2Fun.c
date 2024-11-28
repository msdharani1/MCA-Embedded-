#include<stdio.h>
int big(int,int);
int main(){
  int a,b;
  printf("Find the biggest amoung 2 numbers\n");
  printf("---------------------------------\n");
  printf("Enter the a and b value: ");
  scanf("%d%d", &a,&b);
  big(a,b);
  return 0;
}
int big(int a, int b){
   if (a > b){
      printf("%d is greater \n", a);
   }else{
      printf("%d is greater \n", b);
   }
  return 0;
}

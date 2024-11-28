//No return with arguments using funciton in c
#include<stdio.h>
int sum(int, int);
int main(){
  int n1, n2;
  printf("Enter the n1 and n2 : ");
  scanf("%d%d", &n1, &n2);
  sum(n1,n2);
  return 0;
}
int sum(int x, int y){
   int tot = x + y;
   printf("The sum of %d and %d is %d. \n", x,y,tot);
   return 0;
}

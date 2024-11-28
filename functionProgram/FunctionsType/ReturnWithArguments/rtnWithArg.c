// Return with arguments 
#include<stdio.h>

int sum(int,int);

int main(){
  int a,b;
  printf("Enter the n1 and n2: ");
  scanf("%d%d", &a,&b);
  int res = sum(a,b);
  printf("The sum of %d and %d is %d. \n", a,b,res);
  return 0;
}

int sum(int a, int b){
  return a + b;
}

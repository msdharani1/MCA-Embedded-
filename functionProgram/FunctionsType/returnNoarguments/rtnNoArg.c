//return no argument function in c
#include<stdio.h>
int sum(void);
int main(){
  int res = sum();
  printf("%d \n", res);
  return 0;
}
int sum(void){
  int a,b;
  printf("Enter the n1 and n2 : ");
  scanf("%d%d", &a,&b);
  int r = a + b;
  return r;
}

//No return and no arguments using function in c
#include<stdio.h>
void addition(void);
int main(){
  addition();
  return 0;
}
void addition(void){
  int n1, n2;
  printf("Enter the n1 and n2 : ");
  scanf("%d%d", &n1, &n2);
  int tot = n1 + n2;
  printf("The sum of %d and %d is %d. \n", n1, n2, tot);
}

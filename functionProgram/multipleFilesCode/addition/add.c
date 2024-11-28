#include<stdio.h>
void sum(void){
  int n1,n2;
  printf("Enter the n1 and n2: ");
  scanf("%d%d", &n1,&n2);
  int res = n1 + n2;
  printf("The sum of %d and %d is %d. \n", n1, n2, res);
}

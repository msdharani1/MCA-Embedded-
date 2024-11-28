#include<stdio.h>
void big(void){
  int n1,n2,n3;
  printf("Find the Biggest Amoung Three numbers\n");
  printf("-------------------------------------\n");
  printf("Enter the no 1: ");
  scanf("%d", &n1);
  printf("Enter the no 2: ");
  scanf("%d",&n2);
  printf("Enter the no 3: ");
  scanf("%d", &n3);
  if(n1 > n2 && n1 > n3){
    printf("%d is greater", n1);
  }else if(n2 > n3){
    printf("%d is greater", n2);
  }else{
    printf("%d is greater", n3);
  }
  printf("\n");
}

#include<stdio.h>
void rectangle(void);
int main(){
  rectangle();
  return 0;
}
void rectangle(void){
  int l,b;
  printf("Enter the length and breath: ");
  scanf("%d %d", &l, &b);
  int area = l * b;
  printf("The area of the Reactangle is %d\n", area);
}

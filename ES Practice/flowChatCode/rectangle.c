#include<stdio.h>
int main(){
  int l,b;
  printf("Enter the length and breath: ");
  scanf("%d %d", &l, &b);
  int area = l * b;
  printf("The area of the Reactangle is %d\n", area);
  return 0;
}

#include<stdio.h>
void square(void);
int main(){
  square();
  return 0;
}
void square(void){
  int a;
  printf("Enter the area : ");
  scanf("%d", &a);
  int area = a * a;
  printf("The area of the sqaure is %d\n", area);  
}

#include<stdio.h>
void circle(void);
int main(){
  circle();
  return 0;
}
void circle(void){
  int r;
  float PI = 3.14159265359;
  printf("Enter the radius value : ");
  scanf("%d", &r);
  int area = PI*r*r;
  printf("The area of the Circle is %d \n", area);
}

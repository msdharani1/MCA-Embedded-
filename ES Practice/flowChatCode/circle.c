#include<stdio.h>
int main(){
  int r;
  float PI = 3.14159265359;
  printf("Enter the radius value : ");
  scanf("%d", &r);
  int area = PI*r*r;
  printf("The area of the Circle is %d \n", area);
  return 0;
}

#include<stdio.h>
int main(){
  //Print the even numbers between 10 to 20
  int start; //starting point
  int end;  // Ending point
  printf("Enter the start and end point : ");
  scanf("%d %d", &start, &end);
while(start <= end){ // check the condition for print the even numbers between start and end point
     if( start % 2 == 0){
        printf("%d ", start); // print the start value
     }	     
         start = start + 1;
  }  
  return 0;
}

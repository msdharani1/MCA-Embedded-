#include<stdio.h>
int main(){
  //Print the odd numbers between 10 to 20
  int start; //starting point
  int end;  // Ending point
  printf("Enter the start and end point : ");
  scanf("%d %d", &start, &end);
while(start <= end){ // check the condition for print the odd numbers between start and end point
     if( start % 2 == 0){
	start = start + 1;
     }else{
        printf("%d ", start);
	start = start + 1;
     }
  }  
  return 0;
}

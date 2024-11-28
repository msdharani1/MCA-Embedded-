#include<stdio.h>
/*long factorial(int n){
  if(n==0){
    return 1;
  }else{
    return (n * factorial(n-1));
  }
}*/

int main(){
  int n;
  long fact;
  printf("Enter the number: ");
  scanf("%d", &n);
  int tot = n;
  while(tot > 1){
    fact = tot * tot;
    tot--;
  }
  printf("%ld \n", fact);
  return 0;
}

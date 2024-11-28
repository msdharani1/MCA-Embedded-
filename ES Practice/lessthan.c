#include<stdio.h>
int main(){
   int n1 = 20;
   int n2 = 4;
   int n3 = 6;
   /*if(n1 < n2 && n1 < n3){
     printf("%d is small", n1);
   } else if(n2 < n3){
     printf("%d is small", n2);
   }else{
     printf("%d is small", n3);
   }*/
   if (n1 < n2){
     if(n1 < n3){
       printf("%d is small", n1);
     }
   }
   if(n2 < n1){
      if (n2 < n3){
        printf("%d is small", n2);
      }
   }
   if(n3 < n1){
     if(n3 < n2){
       printf("%d is small", n3);
     }
   }
   return 0;
  }

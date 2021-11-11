#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main(){
   
   int x,y;
   
   scanf("%d%d", &x, &y);
   if (x <= 0 || y <= 0) {
        return 0;
    }
    int i =0;
    
    printf("The Armstrong numbers are:");
    for( i= x; i <= y; i++) {
       
        if(isArmstrong(i) == 1)
           printf(" %d", i);
      
    }
    printf("\n");
    printf("The Palindromes are:");
      for( i= x; i <= y; i++) {
       
        if(isPalindrome(i) == 1)
           printf(" %d", i);
    }
    printf("\n");
    printf("The Prime numbers are:");
      for( i= x; i <= y; i++) {
      
        if(isPrime(i) == 1) 
           printf(" %d", i);
       
    }
    printf("\n");
    printf("The Strong numbers are:");
      for( i= x; i <= y; i++) {
       
        if(isStrong(i) == 1)
           printf(" %d", i);
     
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
#include "NumClass.h"

int main(){
   int x,y;
   scanf("%d %d", &x, &y);
   if (x <= 0 || x <= 0) {
        return 0;
    }
}

        printf("The Armstrong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isArmstrong(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");
   
        printf("The Palindromes are:");
        for (int i = first; i <= last; i++) {
            if(isPalindrome(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");


        printf("The Prime numbers are:");
        for (int i = first; i <= last; i++) {
            if(isPrime(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");


        printf("The Strong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isStrong(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");
        return 0;
}

#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main(){
   int x,y;
    printf("Enter 2 numbers");
    scanf("%d%d",&x,&y);
        int first = x;
        int last = y;
   
        if(first<=0||last<=0){
           return 0;
        }
   
        printf("The Armstrong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isArmstrong(i)==1){
                printf(" %d",i);
            }
        }

        printf("\nThe Palindromes are:");
        for (int i = first; i <= last; i++) {
            if(isPalindrome(i)==1){
                printf(" %d",i);
            }
        }


        printf("\nThe Prime numbers are:");
        for (int i = first; i <= last; i++) {
            if(isPrime(i)==1){
                printf(" %d",i);
            }
        }


        printf("\nThe Strong numbers are:");
        for (int i = first; i <= last; i++) {
            if(isStrong(i)==1){
                printf(" %d",i);
            }
        }
        printf("\n");
        return 0;
}

#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int Factorial(int num){
   if(num<=0)
    return 1;
   else
   return num*Factorial(num-1);
}
int isStrong(int num){
    int sum=0;
    int newN = num;
    while(newN>0)
     {
         int rem=newN%10;
         sum+=Factorial(rem);
         newN=newN/10;
     }
     return num==sum;
   
     }
int isPrime(int num){
        int ans;
        if(num==1){ans=1;}
        if(num==2){ans=1;}
        if(num==3){ans=1;}
        else {
            for (int i = 2; i <=num/2; ++i) {
                if (num % i != 0) {
                    ans = 1;
                }
                else{ans=0;break;}
            }
        }
        return ans;
    }
    

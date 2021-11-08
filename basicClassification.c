#include <stdio.h>
#include <math.h>
int Factorial(int num)
{
   if(num<=0)
    return 1;
   else
   return num*Factorial(num-1);
}
 int isStrong(int num){
    int fact;
    int sum=0;
     if(num>0)
     {
         fact=1;
         int rem=num%10;
         isStrong(num/10);
         fact=Factorial(rem);
         sum+=fact;
     }
     return sum;
     }
int isPrime(int num){
        int ans;
        if(num==1){ans=0;}
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
    
#include <math.h>
#include <stdio.h>

  int isPalindrome(int num){
        if(num<0) {return 0;}
        int temp, digits=0;
        temp=num;
        while(temp>0)
        {
            temp = temp/10;
            digits++;
        }

        return isPalindrome((num/10)%10);
    }
 int isArmstrongParse(int num, int dig){
        if(num<1){return 0; }
        int fact = (pow(num%10,dig));
        return (fact+isArmstrongParse(num/10,dig));
    }
  int isArmstrong(int num){
        int temp, digits=0, sum=0;
        temp=num;
        while(temp>0)
        {
            temp = temp/10;
            digits++;
        }
        sum=(isArmstrongParse(num,digits));
        if(num==sum)
            return 1;
        else return 0;
    }

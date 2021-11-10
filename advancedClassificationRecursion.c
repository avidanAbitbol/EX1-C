#include <math.h>
#include <stdio.h>
#include "NumClass.h"

int isPalindromeParse(int num)
{
    int dig = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int isPalindrome(int num)
{
   if(num == reverse(num))
    {
        return 1;
    }
    
    return 0;
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

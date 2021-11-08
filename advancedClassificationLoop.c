#include <stdio.h>
#include <math.h>
#include <NumClass.h>
     int isArmstrong(int num){
        int temp, digits=0, last=0, sum=0;
        temp=num;
        while(temp>0)
        {
            temp = temp/10;
            digits++;
        }
        temp = num;
        while(temp>0)
        {
            last = temp % 10;
            sum +=  ( pow(last, digits));
            temp = temp/10;
        }
        if(num==sum){
            return 1;
        else return 0;}
    }
    int isPalindrome(int num) {
        int r, sum = 0, temp;
        temp = num;
        while (num > 0) {
            r = num % 10;  //getting remainder
            sum = (sum * 10) + r;
            num = num / 10;
        }
        if(temp==sum){return 1;}
        else return 0;
    }

//question1
#include <stdio.h>
#include <math.h>
int main(){
/*Write a program to calculate simple and compound interest for given principal, rate, and time.
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5
Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76*/
float principal,rate,time, S_I,C_I,amount;
printf("enter the principal:");
scanf("%f",&principal);
printf("enter the rate:");
scanf("%f",&rate);
printf("enter the time:");
scanf("%f",&time);
S_I = (principal*rate*time)/100;
amount = principal *pow((1+rate/100),time);
C_I = (amount-principal);
printf("simple interest = %.2f\n",S_I);
printf("compound interest = %.2f\n",C_I);
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Input 1:
3661
Output 1:
1:1:1
Input 2:
7322
Output 2:
2:2:2*/
int total_seconds , hour,minutes,seconds;
printf("enter time in the seconds :");
scanf("%d" , &total_seconds);
hour = total_seconds/3600 ;
minutes = (total_seconds%3600)/60 ;
seconds = total_seconds%60 ;
printf("%d:%d:%d\n", hour,minutes,seconds);
    return 0;
}


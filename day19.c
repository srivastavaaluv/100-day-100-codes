//question1
#include <stdio.h>
int main(){
/*Write a program to find the LCM of two numbers.
Input 1:
4 5
Output 1:
20
Input 2:
7 3
Output 2:
21*/
int a, b, max;
printf("Enter two numbers:\n");
scanf("%d %d", &a, &b);
max = (a > b) ? a : b; 
while (1) {
if (max % a == 0 && max % b == 0) {
printf("LCM = %d\n", max);
break; }
max++; }
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to find the sum of digits of a number.
Input 1:
123
Output 1:
6
Input 2:
999
Output 2:
27*/
int n, sum = 0, digit;
printf("Enter a number:\n");
scanf("%d", &n);
while (n > 0) {
digit = n % 10; 
sum += digit; 
n /= 10; }
printf("Sum of digits = %d\n", sum);
return 0;
}
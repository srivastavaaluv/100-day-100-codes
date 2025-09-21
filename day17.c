//question1
#include <stdio.h>
/*Write a program to check if a number is an Armstrong number.
Input 1:
153
Output 1:
Armstrong
Input 2:
123
Output 2:
Not Armstrong*/
int power(int base, int exp) {
int result = 1;
for (int i = 0; i < exp; i++) {
result *= base; }
return result; }
int main() {
int n, original, remainder, digits = 0, result = 0;
printf("Enter the number:\n");
scanf("%d", &n);
original = n;
int temp = n;
while (temp > 0) {
digits++;
temp /= 10; }
temp = n;
while (temp > 0) {
remainder = temp % 10;
result += power(remainder, digits); 
temp /= 10; }
if (result == original)
printf("Armstrong\n");
else
printf("Not Armstrong\n");
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to check if a number is prime.
Input 1:
7
Output 1:
Prime
Input 2:
10
Output 2:
Not prime*/
int n, i, flag = 0;
printf("Enter a number:\n");
scanf("%d", &n);
if (n <= 1) {
printf("Not prime\n"); 
return 0;
}
for (i = 2; i * i <= n; i++) {
if (n % i == 0) {
flag = 1; 
break; }
}
if (flag == 0)
printf("Prime\n");
else
printf("Not prime\n");
return 0;
}
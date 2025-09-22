//question1
#include <stdio.h>
int main(){
#include<math.h>
/*Write a program to swap the first and last digit of a number.
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001*/
int n, first, last, digits, power, middle, result;
printf("Enter a number:\n");
scanf("%d", &n);
last = n % 10;
digits = (int)log10(n);
power = (int)pow(10, digits);
first = n / power;   
middle = n % power;
middle = middle / 10; 
result = last * power + middle * 10 + first;
printf("After swapping: %d\n", result);
return 0; }
//question2
#include <stdio.h>
int main(){
/*Write a program to check if a number is a perfect number.
Input 1:
6
Output 1:
Perfect number
Input 2:
10
Output 2:
Not perfect number*/
int n, sum = 0;
printf("Enter a number:\n");
scanf("%d", &n);
for (int i = 1; i <= n / 2; i++) {
if (n % i == 0) {
sum += i;}
}
if (sum == n && n != 0)
printf("Perfect number\n");
else
printf("Not perfect number\n");
return 0; }
//question1
#include <stdio.h>
/*Write a program to check if a number is a strong number.
Input 1:
145
Output 1:
Strong number
Input 2:
123
Output 2:
Not strong number*/
int fact(int n) {
int f = 1;
for(int i = 1; i <= n; i++) {
f *= i; }    
return f; }
int main() {
int n, temp, rem, sum = 0;
printf("Enter a number: ");
scanf("%d", &n);
temp = n;
while(temp > 0) {
rem = temp % 10;           
sum += fact(rem);      
temp /= 10; }
if(sum == n)
printf("Strong Number\n");
else
printf("Not a Strong Number\n");
return 0; }
//question2
#include <stdio.h>
int main(){
/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
Input 1:
3
Output 1:
Approximate sum: 3.3
Input 2:
5
Output 2:
Approximate sum: 4.4*/
int n;
double sum = 0.0;
printf("Enter number of terms: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
sum += (double)(2 * i - 1) / (2 * i); }
printf("Approximate sum: %.1f\n", sum);
return 0; }
//question1
#include <stdio.h>
int main() {
/*Write a program to calculate the factorial of a number.
Input 1: 5 
→ Output 1: 
120
Input 2: 3
→ Output
2: 6*/
int n;
long long fact = 1;
printf("Enter the number:\n");
scanf("%d", &n);
if (n < 0) {
printf("Factorial is not defined for negative numbers.\n");
} else {
for (int i = 1; i <= n; i++) {
fact *= i;
}
printf("Factorial of %d = %lld\n", n, fact);
}
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to reverse a given number.
Input 1:
1234
Output 1:
4321
Input 2:
100
Output 2:
1*/
int n, rev = 0;
printf("Enter the number:\n");
scanf("%d", &n);
while (n != 0) {
int digit = n % 10;      
rev = rev * 10 + digit;  
n /= 10;         
}
printf("Reversed number = %d\n", rev);
return 0;
}
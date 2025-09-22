//question1
#include <stdio.h>
int main(){
/*Write a program to find the product of odd digits of a number.
Input 1:
12345
Output 1:
15 (1*3*5)
Input 2:
2468
Output 2:
1 (no odd digits, assume 1)*/
int n, digit, product = 1, hasOdd = 0;
printf("Enter a number:\n");
scanf("%d", &n);
while (n > 0) {
digit = n % 10; 
if (digit % 2 != 0) {
product *= digit;
hasOdd = 1;}
n /= 10; }
if (hasOdd)
printf("Product of odd digits = %d\n", product);
else
printf("Product of odd digits = 1\n");
return 0; }
//question2
#include <stdio.h>
#include <string.h>
int main(){
/*Write a program to find the 1’s complement of a binary number and print it.
Input 1:
1010
Output 1:
0101
Input 2:
1111
Output 2:
0000*/
char binary[100];
printf("Enter a binary number:\n");
scanf("%s", binary);
for (int i = 0; i < strlen(binary); i++) {
if (binary[i] == '0')
binary[i] = '1';
else if (binary[i] == '1')
binary[i] = '0';
else {
printf("Invalid input! Only 0 and 1 allowed.\n");
return 1;}
}
printf("1's Complement = %s\n", binary);
return 0; }
//question1
#include <stdio.h>
int main(){
/*Write a program to take a number as input 
and print its equivalent binary representation.
Input 1:
10
Output 1:
1010
Input 2:
7
Output 2:
111*/
int n,i;
int binary[32];
printf("enter the number :/n");
scanf("%d",&n);
if(n==0) {
    printf("0\n");
    return0;
}
i = 0;
while (n > 0) {
binary[i] = n % 2;
n = n / 2;
i++; }
for (int j = i - 1; j >= 0; j--) {
printf("%d", binary[j]);}
printf("\n");
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to check if a number is a palindrome.
Input 1:
121
Output 1:
Palindrome
Input 2:
123
Output 2:
Not palindrome
*/
int n, original, reversed = 0, remainder;
printf("enter the number :\n");
scanf("%d", &n);
original = n;
while (n > 0) {
remainder = n % 10;
reversed = reversed * 10 + remainder;
n = n / 10; }
if (original == reversed)
printf("Palindrome\n");
else
printf("Not palindrome\n");
return 0;
}
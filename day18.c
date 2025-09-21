//question1
#include <stdio.h>
int main(){
/*Write a program to print all factors of a given number.
Input 1:
6
Output 1:
1 2 3 6
Input 2:
10
Output 2:
1 2 5 10*/
int n, i;
printf("Enter a number:\n");
scanf("%d", &n);
printf("Factors: ");
for (i = 1; i <= n; i++) {
if (n % i == 0) {
printf("%d ", i); }
}
printf("\n");
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to find the HCF (GCD) of two numbers.
Input 1:
12 18
Output 1:
6
Input 2:
7 9
Output 2:
1*/
int a, b, temp;
printf("Enter two numbers:\n");
scanf("%d %d", &a, &b);
while (b != 0) {
temp = b;
b = a % b;
a = temp; }
printf("%d\n", a);
return 0;
}
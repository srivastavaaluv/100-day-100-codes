//question1
#include <stdio.h>
int main(){
/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
Input 1:
3
Output 1:
Approximate sum: 1.56
Input 2:
5
Output 2:
Approximate sum: 2.22*/
int n;
double sum = 0.0;
printf("Enter number of terms: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
sum += (double)(2 * i) / (4 * i - 1); }
printf("Approximate sum: %.2f\n", sum);
return 0; }
//question2
#include <stdio.h>
int main(){
/* Write a program to print the following pattern:
***** ***** ***** ***** *****
Input 1:
Output 1:
***** ***** ***** ***** ***** */
int n = 5;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n; j++) {
printf("*"); }
if (i < n) {
printf(" "); } }
return 0; }
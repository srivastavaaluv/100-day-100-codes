//question1
#include <stdio.h>
int main(){
/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
Input 1:
Output 1:
    5
   45
  345
 2345
12345*/
int i, j, n = 5;
for(i = 1; i <= n; i++) {
for(j = 1; j <= n - i; j++) {
printf(" "); }
for(j = i; j <= n; j++) {
printf("%d", j); }
printf("\n"); }
return 0; }
//question2
#include <stdio.h>
int main(){
/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Input 1:
Output 1:
Pattern with stars spaced irregularly as shown.*/
int i, j;
for(i = 1; i <= 5; i++) {
printf("\n");
for(j = 1; j <= i; j++) {
printf("*\n"); }
}
for(i = 3; i >= 1; i -= 2) { 
printf("\n");
for(j = 1; j <= i; j++) {
printf("*\n"); }
}
return 0; }
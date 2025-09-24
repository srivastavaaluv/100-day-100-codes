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
int i, j;
for(i = 5; i >= 1; i--) {
for(j = i; j <= 5; j++) {
printf("%d", j); }
printf("\n"); }
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
Input 1:
Output 1:
*****
 ****
  ***
   **
    *
Input 2:
Output 2:
Note: Spaces indicate indentation.*/
int i, j;
int n = 5; 
for(i = 1; i <= n; i++) {
for(j = 1; j < i; j++) {
printf(" "); }
for(j = i; j <= n; j++) {
printf("*"); }
printf("\n"); }
return 0;
}
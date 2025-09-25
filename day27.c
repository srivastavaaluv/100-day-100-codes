//question1
#include <stdio.h>
int main(){
/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
Input 1:
Output 1:
*
***
*****
*******
*********
*******
*****
***
**/
int i, j, n = 5;  
for(i = 1; i <= n; i++) {
for(j = 1; j <= 2*i - 1; j++) {
printf("*"); }
printf("\n"); }
for(i = n-1; i >= 1; i--) {
for(j = 1; j <= 2*i - 1; j++) {
printf("*"); }
printf("\n"); }
return 0; }
//question2
/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
Input 1:
Output 1:
Pattern with layers of stars as shown.*/
#include <stdio.h>
int main(){
int i, j, space, n = 4; 
for(i = 1; i <= n; i++) {
for(space = i; space < n; space++) {
printf(" "); }
for(j = 1; j <= (2*i - 1); j++) {
printf("*"); }
printf("\n");} 
for(i = n-1; i >= 1; i--) {
for(space = n; space > i; space--) {
printf(" "); }
for(j = 1; j <= (2*i - 1); j++) {
printf("*"); }
printf("\n"); }
return 0; }
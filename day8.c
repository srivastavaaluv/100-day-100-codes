//question1
#include <stdio.h>
int main(){
/*Write a program to input a character and check whether it is an uppercase alphabet,lowercase alphabet, digit, or special character.
Input 1:
A
Output 1:
Uppercase alphabet
Input 2:
a
Output 2:
Lowercase alphabet
Input 3:
3
Output 3:
Digit
Input 4:
#
Output 4:
Special character*/
char ch;
printf("enter the character : ");
scanf("%c",&ch);
if (ch >='A'&& ch<='Z')
{
printf("is uppercase alphabet\n");
}
else if (ch >='a'&& ch<='z')
{
printf("is lowercase alphabet\n");
}
else if (ch >='0'&& ch<='9')
{
printf("is digit\n");
}
else {
printf("is special character\n");
}
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to input three numbers and find the largest among them using if–else.
Input 1:
3 7 5
Output 1:
Largest is 7
Input 2:
-1 -5 0
Output 2:
Largest is 0*/
int a,b,c;
printf("enter the numbers : ");
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c) {
 printf("%d is the lasgerst number between given digits\n",a);
}
if(b>=c && b>=a) {
 printf("%d is the lasgerst number between given digits\n",b);
}
if(c>=b && c>=a) {
 printf("%d is the lasgerst number between given digits\n",c);
}
    return 0;
}
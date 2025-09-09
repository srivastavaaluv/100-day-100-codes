//question1
#include <stdio.h>
int main(){
/*Write a program to input a year and check whether it is a leap year or not using conditional statements.
Input 1:
2020
Output 1:
Leap year
Input 2:
1900
Output 2:
Not a leap year
Input 3:
2000
Output 3:
Leap year
Year is a leap year if divisible by 4 but not 100, except if divisible by 40*/
int year;
printf("enter the year:");
scanf("%d",&year);
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("it is a leap year\n");
}else{
    printf("it is not a leap year\n");
}
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to input a character and check whether it is a vowel or consonant using if–else.
Input 1:
a
Output 1:
Vowel
Input 2:
b
Output 2:
Consonant*/
char ch;
printf("enter the character:");
scanf("%c",&ch);
if  ('a' == ch || 'A' == ch || 
     'e' == ch || 'E' == ch ||
     'i' == ch || 'I' == ch ||
     'o' == ch || 'O' == ch ||
     'u' == ch || 'U' == ch ) {
printf("it is a vowel\n");
} else {
printf("it is consonant\n");
}
    return 0;
}

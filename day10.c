#include <stdio.h>
#include <math.h>
int main(){
/*Write a program to classify a triangle as Equilateral, Isosceles,
 or Scalene based on its side lengths.
Input 1:
3 3 3
Output 1:
Equilateral
Input 2:
3 3 4
Output 2:
Isosceles
Input 3:
2 3 4
Output 3:
Scalene*/
int a,b,c;
printf("enter the 3 sides of triangle:\n");
scanf("%d %d %d",&a, &b, &c);
if(a+b>c && a+c>b && b+c>a ) {
if(a==b && b==c) {
printf("it is an equilateral triangle");
}
else if (a==c||a==b||b==c){
printf("it is the isosceles triangle");
}
else {
printf("it is a scalene triangle");
}
}
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to display the day of the week based on a number (1–7) using switch-case.
Input 1:
1
Output 1:
Monday
Input 2:
5
Output 2:
Friday*/
int day;
printf("enter the day number:\n");
scanf("%d", &day);
switch (day){
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("saturday");
break;
case 7:
printf("Sunday");
break;
}
return 0;
}
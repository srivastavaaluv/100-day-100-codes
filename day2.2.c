#include <stdio.h>

int main(){
/*Write a program to calculate the area and circumference of a circle given its radius.
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85*/
float num1 ;
printf("enter the value of first number (radius)");
scanf("%f",&num1);
printf("the area of circle : %f\n",3.15*num1*num1);
printf("the circumference of circle : %f\n", 2*num1*3.15);
    return 0;
}
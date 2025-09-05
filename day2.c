//question1
#include <stdio.h>

int main(){
/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Input 1:
5 10
Output 1:
Area=50, Perimeter=30
Input 2:
3 7
Output 2:
Area=21, Perimeter=20*/
    int num1, num2;
    printf("Enter the value of number1 (length): ");
    scanf("%d", &num1);
    printf("Enter the value of number2 (breadth): ");
    scanf("%d", &num2);
    printf("The area of rectangle: %d\n", num1 * num2);
    printf("The perimeter of rectangle: %d\n", 2 * (num1 + num2));
    return 0;
}
//question2
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



#include <stdio.h>

int main(){
/*Q1: Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7
Input 2:
-1 20
Output 2:
Sum = 19*/
    int num1;
    printf("enter the value of number 1 \n");
    scanf("%d",&num1);
    int num2;
    printf("enter the value of number 2 \n");
    scanf("%d",&num2);
    printf("the sum of both the numbers : %d \n",num1+num2);
    return 0;
}



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


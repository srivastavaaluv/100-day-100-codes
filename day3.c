//question1
#include <stdio.h>

int main(){
    /*Write a program to convert temperature from Celsius to Fahrenheit.
Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212*/
float celsius, fahrenheit;
printf("enter the temprature in celsius=");
scanf("%f", & celsius);
fahrenheit = (celsius * 9/5) + 32;
printf("temprature in fahrenheit : %.2f/n" , fahrenheit);
    return 0;
}

//question2
#include <stdio.h>

int main(){
    /*Write a program to swap two numbers using a third variable.
Input 1:
3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1*/
    int a, b, temp;
    scanf("%d %d", &a, &b); // space between %d %d
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
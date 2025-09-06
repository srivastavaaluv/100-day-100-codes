//question1
#include <stdio.h>
int main(){
/*Write a program to swap two numbers without using a third variable.
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7*/
int a, b, temp;
printf("enter two numbers");
scanf("%d %d", &a, &b);
printf("before swap a= %d b = %d\n", &a, &b);
a = a + b ;
b = a - b ;
a = b - a ;
printf("after swap: a = %d b = %d\n", &a, &b);
    return 0;
 }
// question 2
#include <stdio.h>
int main() {
    /* Write a program to find and display the sum of the first n natural numbers.
       Input 1:
       5
       Output 1:
       Sum=15
       Input 2:
       10
       Output 2:
       Sum=55
    */
    int n, sum;
    printf("Enter the positive integer n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum=%d\n", sum);
    return 0;
}

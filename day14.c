//question1
#include <stdio.h>
int main() {
    /*Write a program to print the sum of the first n odd numbers.
    Input 1:
    3
    Output 1:
    9
    Input 2:
    5
    Output 2:
    25*/
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
    sum += (2 * i - 1); }
    printf("The sum of first %d odd numbers is = %d\n", n, sum);
    return 0;
}
//question2
#include <stdio.h>
int main() {
/*Write a program to print the product of even numbers from 1 to n.
Input 1:
4
Output 1:
8 (2 * 4)
Input 2:
6
Output 2:
48 (2 * 4 * 6)*/
int n, product = 1;
printf("Enter n: ");
scanf("%d", &n);
if (n < 2) {
printf("No even numbers up to %d\n", n);
} else {
printf("Product of even numbers from 1 to %d = ", n);
for (int i = 2; i <= n; i += 2) {
product *= i;
if (i == 2)
printf("%d", i);
else
printf(" * %d", i);
}
printf(" = %d\n", product);
}
return 0;
 }


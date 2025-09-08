//question1
#include <stdio.h>
int main(){
/*Write a program to input an integer and check whether it is even or odd using if–else.
Input 1:
7
Output 1:
7 is odd
Input 2:
12
Output 2:
12 is even*/
int num ;
printf(" enter the digit ");
scanf("%d",&num);
if(num % 2 == 0) {
    printf("%d is even\n", num );
}else {
    printf("%d is odd\n", num);
}
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
Input 1:
-5
Output 1:
Negative
Input 2:
0
Output 2:
Zero
Input 3:
10
Output 3:
Positive*/
int num ;
printf(" enter the digit ");
scanf("%d",&num);
if(num >= 0) {
    if(num == 0) {
printf("%d is zero\n", num);
}
 else {
printf("%d is positive\n", num);
}
} 
else {
printf("%d is negative\n", num);
}
    return 0;
}
//question1
#include <stdio.h>
#include <math.h>
int main(){
/*Write a program to find the roots of a quadratic equation and categorize them.
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1
Input 2:
1 -2 1
Output 2:
Roots are real and same: 1
Input 3:
1 2 5
Output 3:
Roots are complex*/
float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
printf("Enter coefficients a, b and c: ");
scanf("%f %f %f", &a, &b, &c);
if (a == 0) {
printf("This is not a quadratic equation (a cannot be 0).\n");
return 0;
}
discriminant = b * b - 4 * a * c;
if (discriminant > 0) {
root1 = (-b + sqrt(discriminant)) / (2 * a);
root2 = (-b - sqrt(discriminant)) / (2 * a);
printf("Roots are real and distinct.\n");
printf("Root 1 = %.2f and Root 2 = %.2f\n", root1, root2);
}
else if (discriminant == 0) {
root1 = root2 = -b / (2 * a);   // fixed
printf("Roots are real and equal.\n");
printf("Root 1 = Root 2 = %.2f\n", root1);
}
else {
realPart = -b / (2 * a);
imaginaryPart = sqrt(-discriminant) / (2 * a);
printf("Roots are complex and conjugate.\n");
printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
}
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
Input 1:
95
Output 1:
Grade A
Input 2:
82
Output 2:
Grade B
Input 3:
68
Output 3:
Grade D
Input 4:
50
Output 4:
Grade F*/
float percentage;
printf("Enter your percentage (0-100): ");
scanf("%f", &percentage);
if (percentage < 0 || percentage > 100) {
printf("Invalid percentage! Please enter a value between 0 and 100.\n");
} 
else {
if (percentage >= 90)
printf("Grade: A\n");
else if (percentage >= 80)
printf("Grade: B\n");
else if (percentage >= 70)
printf("Grade: C\n");
else if (percentage >= 60)
printf("Grade: D\n");
else if (percentage >= 50)
printf("Grade: E\n");
else  
printf("Grade: F (Fail)\n");
}
    return 0;
} 
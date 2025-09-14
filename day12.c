//question1
#include <stdio.h>
int main() {
    /*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.
Input 1:
4
Output 1:
Fine ₹8
Input 2:
8
Output 2:
Fine ₹22
Input 3:
15
Output 3:
Fine ₹60
Input 4:
31
Output 4:
Membership Cancelled*/
    int lastday;
    int fine = 0;
    printf("Enter the days book is returned late: ");
    scanf("%d", &lastday);
    if (lastday <= 0) {
        printf("No fine\n");
    }
    else if (lastday <= 5) {
        fine = lastday * 2;
        printf("Fine %d\n", fine);
    }
    else if (lastday <= 10) {
        fine = (5 * 2) + (lastday - 5) * 4;
        printf("Fine %d\n", fine);
    }
    else if (lastday <= 30) {
        fine = (5 * 2) + (5 * 4) + (lastday - 10) * 6;
        printf("Fine %d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }
    return 0;
}
//question2
#include <stdio.h>
int main () {
    /*Write a program to calculate electricity bill based on units consumed with these rates:
    First 100 units at ₹5/unit
    Next 100 units at ₹7/unit
    Next 100 units at ₹10/unit
    Above at ₹12/unit
    Input 1:
    50
    Output 1:
    Bill: ₹250
    Input 2:
    150
    Output 2:
    Bill: ₹850
    Input 3:
    250
    Output 3:
    Bill: ₹1700*/  
    int units;
    int bill = 0;
    printf("Enter the number of units you consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }
    printf("Bill: %d\n", bill);
    return 0;
}

//question1
#include <stdio.h>
int main(){
/*Write a program to display the month name and number of days using switch-case for a given month number.
Input 1:
2
Output 1:
February, 28 days
Input 2:
12
Output 2:
December, 31 days*/
int month;
printf("enter the month number : \n");
scanf("%d",&month);
switch (month){
    case 1:
    printf("january 31 days\n");
    break;
    case 2:
    printf("february 28 days\n");
    break;
    case 3:
    printf("march 31 days\n");
    break;
    case 4:
    printf("april 30 days\n");
    break;
    case 5:
    printf("may 31 days\n");
    break;
    case 6:
    printf("june 30 days\n");
    break;
    case 7:
    printf("july 31 days\n");
    break;
    case 8:
    printf("august 31 days\n");
    break;
    case 9:
    printf("september 30 days\n");
    break;
    case 10:
    printf("october 31 days\n");
    break;
    case 11:
    printf("november 30 days\n");
    break;
    case 12:
    printf("december 31 days\n");
    break;
    }
    return 0;
    }
//question2
#include <stdio.h>
int main(){
/*Write a program to find profit or loss percentage given cost price and selling price.
Input 1:
1000 1200
Output 1:
Profit 20%
Input 2:
1000 800
Output 2:
Loss 20%
Input 3:
1000 1000
Output 3:
No Profit No Loss*/
float costprice,sellingprice,profit,loss,percentage; 
printf("enter the cost price : \n");
scanf("%f",&costprice);
printf("enter the selling price : \n");
scanf("%f",&sellingprice);
if(sellingprice>costprice) {
profit = sellingprice-costprice;
printf("profit of ");
percentage = (profit/costprice)*100;
printf("%.2f\n",profit);
printf("percentage of profit : %.2f%%\n");
}
else if(costprice>sellingprice) {
loss=costprice-sellingprice;
printf("loss of ");
percentage = (loss/costprice)*100;
printf("%.2f\n",loss);
printf("pecentage  of loss : %.2f%%\n");
}
else {
    printf("no profit,no loss\n");
}
    return 0;
}
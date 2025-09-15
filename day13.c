//question1
#include <stdio.h>
int main(){
/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Input 1:
4 2 +
Output 1:
6
Input 2:
10 3 %
Output 2:
1
Input 3:
15 5 /
Output 3:
3*/
int a,b;
char op;
printf("enter the 1st no.:\n");
scanf("%d",&a);
printf("enter the 2nd no.:\n");
scanf("%d",&b);
printf("enter the opreators (+, -, *, /,'%'):\n");
scanf(" %c",&op);
if ((op == '/' || op == '%') && b == 0) {
        printf("the number is invalid\n");} 
        else {
switch(op) {
    case'+':
    printf("Answer:%d\n",a+b);
    break;
    case'-':
    printf("Answer:%d\n",a-b);
    break;
    case'*':
    printf("Answer:%d\n",a*b);
    break;
    case'/':
    if(b!=0)
    printf("Answer:%d\n",a/b);
    break;
    printf("enter the valid value of b\n");
    case'%':
    if(b!=0)
    printf("Answer:%d\n",a%b);
    break ;
default:
printf("error");
}
}
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Write a program to print numbers from 1 to n.
Input 1:
5
Output 1:
1 2 3 4 5
Input 2:
3
Output 2:
1 2 3*/
int n,i;
printf("enter the number =\n");
scanf("%d",&n);
for(i = 1; i<=n; i++) {
    printf("%d\n",i);
}
    return 0;
}

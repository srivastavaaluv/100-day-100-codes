//question1
#include <stdio.h>
#include <string.h>
int main(){
/*Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Input 1:
15/04/2025
Output 1:
15-Apr-2025*/
    char date[20];
    int d, m, y;
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &d, &m, &y);
    char *months[] = {
        "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%d", d, months[m-1], y);
   return 0;
}
//question2
#include <stdio.h>
#include <string.h>
int main(){
/*Print all sub-strings of a string.
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c*/
char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            if (!(i == len-1 && j == len-1))
                printf(","); }}
    return 0;}
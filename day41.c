//question1
#include <stdio.h>
int main(){
/*Count characters in a string without using built-in length functions.
Input 1:
Hello
Output 1:
5
Input 2:
 _
Output 2:
1*/
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);  
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    printf("Number of characters: %d\n", count);
   return 0;
}
//question2
#include <stdio.h>
int main() {
/*Print each character of a string on a new line.
Input 1:
Hi
Output 1:
H
i*/
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str); 
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]); }
    return 0;
}
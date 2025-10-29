//question1
#include <stdio.h>
#include <ctype.h>
int main(){
/*Count spaces, digits, and special characters in a string.
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1*/
    char str[100];
    int spaces = 0, digits = 0, special = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]) && str[i] != '\n')
            special++;
        i++; }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Replace spaces with hyphens in a string.
Input 1:
hello world
Output 1:
hello-world*/
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;}
    printf("%s", str);
    return 0;
}
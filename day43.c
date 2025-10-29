//question1
#include <stdio.h>
int main(){
/*Reverse a string.
Input 1:
abcd
Output 1:
dcba*/
    char str[100];
    int i, length = 0;
    char temp;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        length++; }
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp; }
        printf("Reversed string: %s\n", str);
   return 0;
}
//question2
#include <stdio.h>
int main(){
/*Check if a string is a palindrome.
Input 1:
madam
Output 1:
Palindrome
Input 2:
hello
Output 2:
Not palindrome*/
    char str[100];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        length++; }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break; }
    }
    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}
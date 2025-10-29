//question1
#include <stdio.h>
int main(){
/*Count vowels and consonants in a string.
Input 1:
hello
Output 1:
Vowels=2, Consonants=3*/
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    gets(str); 
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;}
    }
    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
   return 0;
}
//question2
#include <stdio.h>
int main(){
/*Convert a lowercase string to uppercase without using built-in functions.
Input 1:
hello
Output 1:
HELLO*/
    char str[100];
    int i;
    printf("Enter a lowercase string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;}
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
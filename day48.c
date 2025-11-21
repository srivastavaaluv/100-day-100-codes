//question1
#include <stdio.h>
#include <stdio.h>
int main(){
/*Check if one string is a rotation of another.
Input 1:
abcde
deabc
Output 1:
Rotation
Input 2:
abc
acb
Output 2:
Not rotation*/
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;  }
   char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");
    return 0;
}
//question2
#include <stdio.h>
#include <string.h>
int main(){
/*Reverse each word in a sentence without changing the word order.
Input 1:
I love coding
Output 1:
I evol gnidoc*/
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;}}
    char sentence[200];
    fgets(sentence, sizeof(sentence), stdin);
    int i = 0, start = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            reverse(sentence, start, i - 1);
            start = i + 1;}
        i++;}
    printf("%s", sentence);
    return 0;}
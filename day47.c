//question1
#include <stdio.h>
#include <string.h>
int main(){
/*Check if two strings are anagrams of each other.
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams*/
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;}
for (i = 0; str1[i] != '\0'; i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;}
for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;}}
    printf("Anagrams");
    return 0;}
//question2
#include <stdio.h>
#include <string.h>
int main(){
/*Find the longest word in a sentence.
Input 1:
I love programming
Output 1:
programming*/
    char sentence[200];
    char longest[50] = "";
    char word[50];
    int i = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);   
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];       
        } else {
            word[j] = '\0';     
if (strlen(word) > strlen(longest)) {
strcpy(longest, word);             }
j = 0;                             }
        i++;}
    word[j] = '\0';
    if (strlen(word) > strlen(longest)) {
        strcpy(longest, word);}
    printf("Longest word: %s", longest);
    return 0;}
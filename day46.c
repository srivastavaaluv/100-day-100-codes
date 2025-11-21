//question1 
#include <stdio.h>
int main(){
/*Remove all vowels from a string.
Input 1:
education
Output 1:
dctn*/
    char str[100], result[100];
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            result[j++] = c; }}
    result[j] = '\0';  
    printf("Output: %s", result);
return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the first repeating lowercase alphabet in a string.
Input 1:
stress
Output 1:
s*/
    char str[100];
    int freq[26] = {0};
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        if (freq[index] == 1) {
            printf("First repeating character: %c", str[i]);
            return 0; }
        freq[index]++;}
    printf("No repeating character found");
    return 0;}
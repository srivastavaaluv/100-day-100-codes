//question1
#include <stdio.h>
#include <string.h>
int main(){
/*Count frequency of a given character in a string.
Input 1:
programming
g
Output 1:
2*/
char str[100], ch;
int count = 0;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin); 
str[strcspn(str, "\n")] = '\0';
printf("Enter a character to count: ");
scanf("%c", &ch);
for (int i = 0; i < strlen(str); i++) {
if (str[i] == ch)
count++; }
printf("Frequency of '%c' = %d\n", ch, count);
return 0;
}
//question2
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[100];
int main(){
/*Toggle case of each character in a string.
Input 1:
Hello
Output 1:
hELLO*/
char str[100];
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\n")] = '\0';
for (int i = 0; i < strlen(str); i++) {
if (islower(str[i]))
str[i] = toupper(str[i]);
else if (isupper(str[i]))
str[i] = tolower(str[i]); }
printf("Toggled string: %s\n", str);
return 0; }
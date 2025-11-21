//question1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
/*Print the initials of a name.
Input 1:
John Doe
Output 1:
J.D.*/
    char name[100];
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len-1] == '\n')
        name[len-1] = '\0';
    int lastSpace = -1;
for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;}
    printf("%c.", toupper(name[0]));
    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ')
            printf("%c.", toupper(name[i+1]));}
    printf(" %s", &name[lastSpace + 1]);
    return 0;}
//question2
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
/*Print initials of a name with the surname displayed in full.
Input 1:
John David Doe
Output 1:
J.D. Doe*/
    char name[100];
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (name[len-1] == '\n')
        name[len-1] = '\0';
    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i; }
    printf("%c.", toupper(name[0]));
    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i+1] != ' ')
            printf("%c.", toupper(name[i+1]));}
    printf(" %s", &name[lastSpace + 1]);
    return 0;
}
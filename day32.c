//question1
#include <stdio.h>
int main(){
/*Merge two arrays.
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5*/
int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]); }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]); }
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];}
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];}
            printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);}

    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the digit that occurs the most times in an integer number.
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7*/
 long long num;
    int freq[10] = {0};
    printf("Enter an integer: ");
    scanf("%lld", &num);
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10; }
    int max_digit = 0;
    int max_count = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            max_digit = i;}
        }    printf("Digit occurring most times: %d\n", max_digit);
    return 0;
}
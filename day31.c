//question1
#include <stdio.h>
int main(){
/*Search for an element in an array using linear search.
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2
Input 2:
4
10 20 30 40
25
Output 2:
-1*/
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Reverse an array without taking extra space.
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1*/
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp; }
    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); }
   return 0;
}
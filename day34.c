//question1
#include <stdio.h>
int main(){
/*Insert an element in an array at a given position.
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40*/
int n, pos, element, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &element);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; }
    arr[pos] = element;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); }
    return 0;}
//question2
#include <stdio.h>
int main(){
/*Delete an element from an array.
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5*/
    int n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; }
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
   return 0;
}
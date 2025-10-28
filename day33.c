//question1
#include <stdio.h>
int main(){
/*Search in a sorted array using binary search.
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3
Input 2:
5
1 3 5 7 9
6
Output 2:
-1*/
int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    int low = 0, high = n - 1, mid;
    int found = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1; }
    }
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Insert an element in a sorted array at the appropriate position.
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6*/
    int n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    printf("Enter element to insert: ");
    scanf("%d", &num);
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > num); i--) {
        arr[i + 1] = arr[i];}
    arr[i + 1] = num;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   return 0;
}
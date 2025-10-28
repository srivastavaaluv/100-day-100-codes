//question1
#include <stdio.h>
int main(){
/*Find the second largest element in an array.
Input 1:
5
10 20 30 40 50
Output 1:
40*/
int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second_largest = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    printf("Second largest element: %d\n", second_largest);
    return 0;
    }
//question2
#include <stdio.h>
int main(){
/*Rotate an array to the right by k positions.
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3*/
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations (k): ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k > n
    int rotated[n];
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    printf("Array after rotation: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}
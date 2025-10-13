//question1
#include <stdio.h>
int main(){
/*Find the sum of array elements.
Input 1:
4
2 4 6 8
Output 1:
20
Input 2:
3
1 1 1
Output 2:
3*/
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; }
    printf("%d", sum);
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the maximum and minimum element in an array.
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1
Input 2:
3
10 10 10
Output 2:
Max=10, Min=10*/
    int n;
    scanf("%d", &n);        // Read number of elements
    int arr[n];
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
 // Find max and min
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    // Print results
    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}

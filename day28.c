//question1
#include <stdio.h>
int main(){
/*Write a program to print all the prime numbers from 1 to n.
Input 1:
10
Output 1:
2 3 5 7
Input 2:
20
Output 2:
2 3 5 7 11 13 17 19*/
int n, i, j, isPrime;
scanf("%d", &n);
for(i = 2; i <= n; i++) {
isPrime = 1;
for(j = 2; j * j <= i; j++) {
if(i % j == 0) {
isPrime = 0;
break; }
}
if(isPrime) {
printf("%d ", i); }
}
return 0; }
//question2
#include <stdio.h>
int main(){
/*Read and print elements of a one-dimensional array.
Input 1:
3
10 20 30
Output 1:
10 20 30
Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5*/
    int n;
    scanf("%d", &n); // Read number of elements
    int arr[n];
    // Read array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    // Print array elements
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

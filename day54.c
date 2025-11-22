//question1
#include <stdio.h>
#include <math.h>
/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Input 1:
n = 8
Output 1:
6
Explanation 1:
6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
Input 2:
n = 1
Output 2:
1
Explanation 2:
1 is the pivot integer since: 1 = 1.
Input 3:
n = 4
Output 3:
-1
Explanation 3:
It can be proved that no such integer exists.*/
int pivotInteger(int n) {
    int S = n * (n + 1) / 2;
    int x = sqrt(S);
    if (x * x == S)
        return x;   
    return -1; }
int main() {
    int n = 8;   
    int ans = pivotInteger(n);
    printf("%d", ans);
    return 0;}
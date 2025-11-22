//question1
#include <stdio.h>
/*Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
Explanation 1:
The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.
Input 2:
nums = [1,2,3]
Output 2:
-1
Explanation 2:
There is no index that satisfies the conditions in the problem statement.
Input 3:
nums = [2,1,-1]
Output 3:
0
Explanation 3:
The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.*/
#include <stdio.h>
int pivotIndex(int nums[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += nums[i];
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
            return i;  
        leftSum += nums[i];}
    return -1;  }
int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int index = pivotIndex(nums, n);
    printf("%d", index);
    return 0;}

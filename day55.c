//question1
#include<stdio.h>
/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
Input 1:
nums = [3,2,3]
Output 1:
3
Explanation 1:
Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.
Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2
Explanation 2:
Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.
Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
Explanation 3:
Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. 
Hence, no majority element exists.*/
int majorityElement(int nums[], int n) {
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;}}
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i]== candidate)
            freq++; }
    if (freq > n / 2)
        return candidate;
    return -1;}
int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = majorityElement(nums, n);
    printf("%d", result);
    return 0;}
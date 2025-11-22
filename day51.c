//question1
#include <stdio.h>
/*Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4
Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1
Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5*/
int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; }
        else if (nums[mid] < target) {
            low = mid + 1;}
        else {
            high = mid - 1;}}
    return first;}
int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;}
        else if (nums[mid] < target) {
            low = mid + 1; }
        else {
            high = mid - 1; }}
    return last; }
int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);
    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);
    printf("%d, %d", first, last);
    return 0; }
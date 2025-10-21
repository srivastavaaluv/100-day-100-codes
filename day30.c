//question1
#include <stdio.h>
int main() {
/*Count even and odd numbers in an array.
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0*/
int n, i;
int even = 0, odd = 0;
printf("enter the number of element");
scanf("%d",&n);
int arr[n];
printf("enter %d elements",n);
for(i = 0; i<n; i++) {
scanf("%d",&arr[i]);
}
for(i=0; i<n; i++) {
if(arr[i]% 2 == 0)
even++;
else
odd++;
}
printf("even=%d\n,odd=%d\n", even,odd);

    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Count positive, negative, and zero elements in an array.
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1*/
int n,i;
int positive = 0 , negative = 0 , zero = 0 ;
printf("enter the number of elements:\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements:\n");
for(i=0; i< n; i++) {
scanf("%d",&arr[i]);
}
for (i = 0; i < n; i++) {
if(arr[i] > 0)
positive++;
else if(arr[i] < 0)
negative++;
else
zero++;
}
printf("positive=%d\n, negative=%d\n, zero=%d\n", positive, negative, zero);
    return 0;
}
//question1
#include <stdio.h>
int main() {
    /* Read and print a matrix.
       Input:
       2 2
       1 2
       3 4
       Output:
       1 2
       3 4
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the sum of all elements in a matrix.
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21*/
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d", sum);
   return 0;
}
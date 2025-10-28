// question1
#include <stdio.h>
int main() {
    /* Find the sum of each row of a matrix and store it in an array.
       Input:
       2 3
       1 2 3
       4 5 6
       Output:
       6 15
    */
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int rowSum[rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the transpose of a matrix.
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6 */
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
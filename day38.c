//question1
#include <stdio.h>
int main(){
/*Add two matrices.
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12*/
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible");
        return 0;
    }

    int sum[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Check if a matrix is symmetric.
Input 1:
2 2
1 2
2 1
Output 1:
True
Input 2:
2 2
1 0
2 1
Output 2:
False*/
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (rows != cols) {
        printf("False");
        return 0;
    }
    int isSymmetric = 1; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
    if (isSymmetric)
        printf("True");
    else
        printf("False");
    return 0;
}
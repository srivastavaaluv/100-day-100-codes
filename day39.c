//question1
#include <stdio.h>
int main(){
/*Check if the elements on the diagonal of a matrix are distinct.
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False
Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True*/
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) {
        printf("False");
        return 0;
    }
    int distinct = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    if (distinct)
        printf("True");
    else
        printf("False");
    return 0;
}
//question2
#include <stdio.h>
int main(){
/*Find the sum of main diagonal elements for a square matrix.
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15*/
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n && i < m; i++) {
        sum += matrix[i][i];
    }
    printf("%d", sum);
    return 0;
}
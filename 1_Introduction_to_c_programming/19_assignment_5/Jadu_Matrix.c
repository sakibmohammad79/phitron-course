#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("NO\n");
        return 0;
    }

    int matrix[row][col];
    int isJaduMatrix = 1;

 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(i==j || i+j ==  row -1){
                if(matrix[i][j] != 1){
                    isJaduMatrix = 0;
                }
            }
            else{
                if(matrix[i][j] != 0){
                isJaduMatrix = 0;
                }
            }
        }
    }

    if (isJaduMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

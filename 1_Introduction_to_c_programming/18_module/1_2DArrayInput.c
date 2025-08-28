#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int value[row][col];
    //input
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &value[i][j]);
        }
    }
    //output
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d ", value[i][j]);
        }
         printf("\n");
    }
    return 0;
}
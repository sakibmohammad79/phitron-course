//if row number is one is called row matrix
//if col number is one is calld row matrix

//if every col and row value is zero is call zero matrix
#include<stdio.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c);
    int value[r][c];
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &value[i][j]);
        }
    }

    int isZeroMatrix = 1;

    for (int i = 0; i < r; i++)
    {
        for(int j= 0; j<c; j++){
            if(value[i][j] != 0){
                isZeroMatrix = 0;
            }
        }
    }

    if(isZeroMatrix){
        printf("Is zero matrix!");
    }
    else{
        printf("Is not zero matrix!");
    }
    
    return 0;
}
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

    int isDiagonal = 1;

    if(r != c){
        isDiagonal = 0;
     
    }

     
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
           if(i!=j){
            if(value[i][j] != 0){
                isDiagonal = 0;
            }
           }
        }
    }

    if(isDiagonal){
        printf("It's diagonal matrix!");
    }
    else{
        printf("It's not diagonal matrix!");
    }
  
    return 0;
}
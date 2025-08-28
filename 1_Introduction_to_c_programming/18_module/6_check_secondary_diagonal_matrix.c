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

    int isSecondaryDiagonal = 1;
    if(r != c){
        isSecondaryDiagonal = 0;
     
    }

    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
           if((i+j) != (r-1)){
            if(value[i][j] != 0){
                isSecondaryDiagonal = 0;
            }
           }
        }
    }

    if(isSecondaryDiagonal){
        printf("It's secondary diagonal matrix!");
    }
    else{
        printf("It's not secondary diagonal matrix!");
    }
  
    return 0;
}
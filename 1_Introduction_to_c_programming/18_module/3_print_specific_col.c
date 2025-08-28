#include<stdio.h>
int main()
{
    int r, c; scanf("%d %d", &r, &c);
    int value[4][4];
    //input
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d", &value[i][j]);
        }
    }

    int specific_col; scanf("%d", &specific_col);

    for (int i = 0; i < r; i++)
    {
        printf("%d ", value[i][specific_col]);
    }
    
    return 0;
}
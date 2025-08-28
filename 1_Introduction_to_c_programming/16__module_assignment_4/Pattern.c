#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int top_space = N - 1;
    int top_symbolCount = 1;
 
    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= top_space; s++) {
            printf(" ");
        }
        for (int j = 1; j <= top_symbolCount; j++) {
            if(i%2 == 1){
                printf("#");
            }
            else{
                printf("-");
            }
            
        }
        printf("\n");
        top_space--;
        top_symbolCount += 2;
    }

    int bottom_space = 1;
    int bottom_symbolCount = N*2-3;
    for (int i = N - 1; i >= 1; i--) {
    
        for (int s = 1; s <= bottom_space; s++) {
            printf(" ");
        }
        for (int j = 1; j <= bottom_symbolCount; j++) {
            if(i%2 == 1){
                printf("#");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
        bottom_space++;
        bottom_symbolCount -= 2;
    }

    return 0;
}

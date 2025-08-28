#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int starInc = 1; 
    int spaceDec = n -1;
    
    for(int i = 1; i<=n; i++){
        for (int s = 1; s<=spaceDec; s++){
            printf(" ");
        }
        for(int j = 1; j<=starInc; j++){
            printf("*");
        }
        printf("\n");
        starInc +=2;
        spaceDec--;   
    }

    int starDec = n*2 -1;
    int spaceInc = 0;
    for(int i = 1; i<=n; i++){
        for(int s=1; s<=spaceInc; s++){
            printf(" ");
        }
         for(int j = 1; j<=starDec; j++){
            printf("*");
        }
        printf("\n");
        starDec -= 2;
        spaceInc++;
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n; scanf("%d", &n);
    int line = 5;
    int space = 4;
    if(n%2 == 1){
        for(int i =1; i<=n; i++){
            if(i%2 == 1){
                line++;
                space++;
            }
        }
    }
    int star = 1;
    for(int i = 1; i<=line; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int j= 1; j<=star; j++){
            printf("*");
        }
        star += 2;
        space--;
        printf("\n");
    }

    for(int i = 1; i<=5; i++){
        for(int j= 1; j<=5; j++){
            printf(" ");
        }
        for(int j= 1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}
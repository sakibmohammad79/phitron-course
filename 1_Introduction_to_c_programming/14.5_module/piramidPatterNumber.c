#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n -1;
    for(int i = 1; i<=n; i++){
        for(int j= space; j>0; j--){
            printf(" ");
        }
        for(int j = 1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
        space--;
    }
    return 0;
}
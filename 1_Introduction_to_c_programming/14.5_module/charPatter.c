#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    for(int i = 1; i<=n ; i++){
        int ch = 65;
        for(int j = 1; j<=i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
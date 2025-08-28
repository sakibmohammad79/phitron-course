#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &value[i]);
    }
    int x;
    int flag = 0;
    scanf("%d", &x);
    for(int i = 0; i<n-1; i++){
        for(int j= i+1; j<n; j++){
            if(value[i] + value[j] == x){
                flag = 1;
                break;
            }
        }
    }
    if(flag){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &value[i]);
    }

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(value[i] > value[j]){
                int temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++){
        printf("%d ", value[i]);
    }
    return 0;
}
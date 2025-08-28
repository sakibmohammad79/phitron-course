#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &digit[i]);
    }

    for(int i = 0; i<n-1; i++){
        for(int j= i+1; j<n; j++){
            if(digit[i] > digit[j]){
                int value = digit[i];
                digit[i] = digit[j];
                digit[j] = value;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", digit[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n; 
    scanf("%d", &n);
    int value, pos=0, neg=0;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        if(value > 0){
            pos += value;
        }
        else if(value< 0){
            neg += value;
        }
        
    }
    printf("%d %d", pos, neg);
    return 0;
}
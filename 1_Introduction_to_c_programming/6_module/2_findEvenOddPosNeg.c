#include<stdio.h>
int main()
{
    int n, value, even = 0, odd = 0, pos = 0, neg= 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        if(value % 2 == 0){
            even++;
        }
        else{
            odd++;
        }

        if(value > 0){
            pos++;
        }
        else if(value< 0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}
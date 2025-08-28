#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        int x;
        scanf("%d", &x);
        long long int fact = 1;
        if(x == 0){
            fact = 1;
        }
        for(int i = 1; i<=x; i++){
        fact = fact * i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}
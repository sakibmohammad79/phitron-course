#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);
    for(int i =1; i<=n; i++){
        long long int m;
        int  a, b, c; 

        
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int mul_of_three_value = (a*b*c);
        long long int fourth_value = m/mul_of_three_value;

        if(mul_of_three_value == 0){
            if(m==0){
                printf("%d", 0);
            }
            else{
                printf("%d", -1);
            }
        }
        else if(m % mul_of_three_value != 0){
            printf("%d", -1);
        }
        else{
            printf("%lld", fourth_value);
        }
        printf("\n");

    }

    return 0;
}
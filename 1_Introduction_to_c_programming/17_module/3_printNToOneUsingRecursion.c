#include<stdio.h>
void print(int n){

    if(n == 0){
        return;
    }
    printf("%d\n", n); // n to 1;
    print(n-1);
    printf("%d\n", n); // 1 to n;
}
int main()
{
    int n; scanf("%d", &n);
    print(n);
    return 0;
}
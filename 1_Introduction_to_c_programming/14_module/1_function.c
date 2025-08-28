#include<stdio.h>

int sum (int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = sum(a, b);
    printf("%d", ans);
    return 0;
}
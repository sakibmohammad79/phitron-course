#include<stdio.h>

int avg() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int average = (num1+num2+num3) / 3;
    return average;
}

int main()
{
    int result = avg();
    printf("%d", result);
    return 0;
}
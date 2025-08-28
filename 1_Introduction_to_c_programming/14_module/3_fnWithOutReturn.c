#include<stdio.h>

void avg(int num1, int num2, int num3){
    int average = (num1 + num2 + num3) / 3;
    printf("%d", average);
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    avg(a, b, c);
    return 0;
}
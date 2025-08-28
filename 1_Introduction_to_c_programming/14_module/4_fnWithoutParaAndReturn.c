#include<stdio.h>

void avg(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int average = (a + b+ c)/3;
    printf("%d", average);
    return;
}

int main()
{
    avg();
    return 0;
}
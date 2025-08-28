#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    //proved a is a pointer a store memory address of first value (0 index)
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);
    printf("%p\n", &a[3]);
    printf("%p\n", &a[4]);

    *(a+2) = 100;
    for(int i = 0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
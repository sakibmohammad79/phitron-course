#include<stdio.h>
int main()
{
    int n =100;
    printf("%d\n", n);// print actual value
    printf("%p\n", &n); //print address value  of n

    //declear pointer variable for store address of n;
    int* ptr;
    ptr = &n;
    printf("%p\n", ptr);

    //print address of ptr varibale
    printf("%p\n", &ptr);

    //print actual value using ptr
    printf("%d\n", *ptr); //100

    //change actual value using ptr d reference
    *ptr = 200;
    printf("%d\n", *ptr); //200
    printf("%d\n", n); //200
    return 0;
}
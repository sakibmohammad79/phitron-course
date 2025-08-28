//pass by value
#include<stdio.h>

void fun (int n){
    printf("%d\n", n);
    n=20;
    printf("%d\n", n);
}

int main()
{
    int x = 10;
    fun(x);
    return 0;
}




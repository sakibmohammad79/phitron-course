#include<stdio.h>

void print(int initialValue, int n){
    if(initialValue>n){
        return;
    }
    printf("%d\n", initialValue); //1 to N
    print(initialValue+1, n);
    //  printf("%d\n", initialValue); //N to 1
}

int main()
{
    int n, initialValue = 1; scanf("%d", &n);
    print(initialValue, n);
    return 0;
}
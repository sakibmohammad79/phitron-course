//array always pass by reference, not pass similer array
#include<stdio.h>

void fun(int a[], int n){

    a[0] = 200;
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]); //200 20 30 40 50 
    }
    printf("\n");

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]); //10 20 30 40 50
    }

    fun(a, n);

    for(int i = 0; i<n; i++){
        printf("%d ", a[i]); //200 20 30 40 50 
    }
    return 0;
}
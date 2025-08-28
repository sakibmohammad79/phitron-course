#include<stdio.h>
int main(){
    int number,i;
    scanf("%d", &number);
    for(i=1; i<=number; i = i+1){
        if(i % 2 ==0){
            printf("%d is even!\n", i);
        }
        else{
            printf("%d is odd!\n", i);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    //less then operator
    int lessthenResult = num1 < num2;
    printf("Lessthen result is = %d\n", lessthenResult);
    //geterthen operator
    int gaterthenResult = num1 > num2;
    printf("gaterthen result is = %d\n", gaterthenResult);
    //lessthan equal
    int lesEqual = num1 <= num2;
    printf("lessEqul result is = %d\n", lesEqual);
    //gaterthan equal
    int gaterEqual = num1 >= num2;
    printf("gaterEqual result is = %d\n", gaterEqual);
    //equal
    int equalResult = num1 == num2;
    printf("equal result is = %d\n", equalResult);

    return 0;
}
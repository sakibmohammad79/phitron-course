// just send the value that's why no changes value in main fn
//pass by reference
#include<stdio.h>
void fun (int* addressValue){
    *addressValue = 20;
    printf("value change in fun fn using varible address => %d\n", *addressValue);
}
int main()
{
    int n = 5; 
    printf("actual value => %d\n", n);
    fun(&n);
    printf("value in main fn before change value => %d\n", n);
    return 0;
}
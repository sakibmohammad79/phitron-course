#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if ( num1 < 100 && num2 > 50)
    {
        printf("Condition are true!");

    }
    if(num1 < 100 || num2> 50){
        printf("conditon are true!!");
    }
    else {
        printf("condition are not true!");
    }
}
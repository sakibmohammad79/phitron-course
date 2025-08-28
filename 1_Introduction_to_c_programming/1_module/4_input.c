#include<stdio.h>
int main () {
    int int_num;
    float float_num;
    char char_value;
    scanf("%d", &int_num);
    scanf("%f", &float_num);
    getchar();
    scanf("%c", &char_value);

    printf("int value = %d\n", int_num);
    printf("float value = %f\n", float_num);
    printf("char value = %c\n", char_value);

    printf("%d %f %c", int_num, float_num, char_value);

    return 0;
}
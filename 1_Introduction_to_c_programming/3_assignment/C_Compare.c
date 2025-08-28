#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22];
    scanf("%s", &a);
    scanf("%s", &b);
    int result = strcmp(a, b);
    if(result == 0){
        printf("%s", a);
    }
    else if(result < 0){
        printf("%s", a);
    }
    else if(result > 0){
        printf("%s", b);
    }
    return 0;
}
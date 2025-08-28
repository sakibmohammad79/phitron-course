#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int aLen = strlen(a);
    int bLen = strlen(b);
    for(int i = 0; i<=bLen; i++){
        a[i+aLen] = b[i];
    }
    printf("%s", a);
    return 0;
}
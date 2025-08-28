#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    int asciiValue = (int)x;
    if(asciiValue >= 65 && asciiValue <= 90){
        asciiValue += 32;
        printf("%c", asciiValue); 
    }
    else if(asciiValue >= 97 && asciiValue <= 122){
        asciiValue -= 32;
        printf("%c", asciiValue);
    }
    return 0;
}
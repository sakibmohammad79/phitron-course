#include<stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    int asciiValue = (int)x;

    if(x >=65 && x <=90 || x >=97 && x <=122 ){
        if(x >=65 && x <=90){
            printf("ALPHA\nIS CAPITAL");
        }
        else{
            printf("ALPHA\nIS SMALL");
        }
    }
    else if(x >= 48 && x <=57 ){
        printf("IS DIGIT");
    }
    else{
        printf("Not a valid input.");
    }
}
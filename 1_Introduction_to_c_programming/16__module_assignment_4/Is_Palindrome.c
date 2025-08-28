#include<stdio.h>
#include<string.h>
int is_palindrome(char S[]){
    int S_len = strlen(S);
    int isPalindrom = 1;
    for(int i = 0, j= S_len -1; i<j; i++, j--){
        if(S[i] != S[j]){
            isPalindrom = 0;
        }
    }
    return isPalindrom;
}
int main()
{
    char S[1001]; scanf("%s", S);
    int isPalindrom = is_palindrome(S);
    if(isPalindrom){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}
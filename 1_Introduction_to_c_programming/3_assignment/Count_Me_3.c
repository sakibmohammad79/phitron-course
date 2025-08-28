#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        char word[10001];
    scanf("%s", &word);
    int s_len = strlen(word);
    int smallAlp = 0;
    int capitalAlp = 0;
    int digit = 0;
    for(int i = 0; i<s_len; i++){
        if(word[i] >= 'a' && word[i] <='z'){
            smallAlp++;
        }
        else if(word[i] >= 'A' && word[i] <='Z'){
            capitalAlp++;
        }
        else if(word[i] >= '0' && word[i] <='9'){
            digit++;
        }
    }
    printf("%d %d %d\n", capitalAlp, smallAlp, digit);
    }
    return 0;
}
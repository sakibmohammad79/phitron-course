#include<stdio.h>
#include<string.h>
int main()
{
    char word1[101], word2[101];
    scanf("%s %s", &word1, &word2);
    const wordTwoLen = strlen(word2);
    for(int i = 0; i<=wordTwoLen; i++){
        word1[i] = word2[i];
    }
    printf("%s %s", word1, word2);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    int s_length = strlen(s);
    int vowelCount = 0;
    for(int i = 0; i<s_length; i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            vowelCount++;
        }
    }
    printf("%d", vowelCount);
    return 0;
}
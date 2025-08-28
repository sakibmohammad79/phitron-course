#include<stdio.h>
#include<string.h>

int main() {
    char s[10001];
    scanf("%s", s);
    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
            freq[index]++;
    }


    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}

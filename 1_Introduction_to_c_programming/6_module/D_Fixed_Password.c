#include <stdio.h>

int main() {
    int password;
    while (scanf("%d", &password) == 1) {
        if (password == 1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}

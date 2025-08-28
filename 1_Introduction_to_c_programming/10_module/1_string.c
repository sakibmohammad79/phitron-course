// #include<stdio.h>
// int main()
// {
//     char str[5]; //%c take input with space
//     for(int i = 0; i<5; i++){
//         scanf("%c", &str[i]);
//     }
//     for(int i = 0; i<5; i++){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

//take input as a word/string
#include<stdio.h>
int main()
{
    char str[10];

    // int sizeOfCharArray = sizeof(str)/sizeof(char);
    // printf("%d", sizeOfCharArray);
    scanf("%s", &str);
    printf("%s", str);
    return 0;
}
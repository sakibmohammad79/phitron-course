// #include<stdio.h>
// int main()
// {
//     char str[10];
//     scanf("%s", &str);
//     printf("%s\n", str);
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++){
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }

//use strlen for count string lenght
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s", &str);
    int strLenght = strlen(str);
    printf("%d", strLenght);
    return 0;
}
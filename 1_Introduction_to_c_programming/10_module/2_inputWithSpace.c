//using gets function
// #include<stdio.h>
// int main()
// {
//     char str[100];
//     gets(str);
//     printf("%s", str);
//     return 0;
// }

//using fgets function
#include<stdio.h>
int main()
{
    char str[50];
    fgets(str, 16, stdin);
    printf("%s", str);
    return 0;
}
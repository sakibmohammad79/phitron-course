// #include<stdio.h>
// int main()
// {
//     int n, value;
//     scanf("%d", &n);
//     int max = 0;
//     for(int i = 1; i<=n; i++){
//         scanf("%d", &value);
//         if(max < value){
//             max = value;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

//this code for negative value also
#include<stdio.h>
#include<limits.h>
int main()
{
    int n, value;
    scanf("%d", &n);
    int max = INT_MIN;
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        if(max < value){
            max = value;
        }
    }
    printf("%d", max);
    return 0;
}
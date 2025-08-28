// #include<stdio.h>
// int main()
// {
//     int N; scanf("%d", &N);
   
//     int space = N-1;
//     for(int i = 1; i<=N; i++){
        
//         int value = 1;
//         while (N--)
//         {
//             for(int i = 1; i<=space; i++){
//                 printf(" ");
//             }
//             for(int i = value; i > 0; i--){
//                 printf("%d", i);
//             }
//             printf("\n");
//             value++;
//             space--;
//         }   
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int space = N - 1;
    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= space; s++) {
            printf(" ");
        }

        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        space--;
        printf("\n");
    }

    return 0;
}

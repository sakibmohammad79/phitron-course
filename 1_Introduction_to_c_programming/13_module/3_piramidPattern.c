// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;

//     for (int i = 1; i <= n; i++) {
//        //print space
//         for (int s = 1; s <= space; s++) {
//             printf(" ");
//         }

//         // Print stars
//         for (int j = 1; j <= star; j++) {
//             printf("*");
//         }

//         printf("\n");
//         star += 2;  
//         space--;     
//     }

//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = (n*2) -1;
    int count = 1;
    int space = n-1;
    for(int i = 1; i<=n; i++){
        for(int s=1; s<=space; s++){
            printf(" ");
        }
        for(int j=1; j<=count; j++){
            printf("*");
        }
        printf("\n");
        count += 2;
        space--;
    }

    int spaceInc = 1;

    for (int i = 1; i <=n; i++)
    {
        for(int s = 1; s<spaceInc; s++){
            printf(" ");
        }
        for(int j = 1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star -= 2;
        spaceInc++;
    }
    
    return 0;
}
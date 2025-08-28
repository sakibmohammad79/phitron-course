//break
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1; i<=10; i++){
//         if(i==5){
//             break;
//         }
//         printf("%d\n", i);
//     }
//     return 0;
// }

//continue
#include<stdio.h>
int main(){
    int i;
    for(i=1; i<=10; i++){
        if(i==7){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
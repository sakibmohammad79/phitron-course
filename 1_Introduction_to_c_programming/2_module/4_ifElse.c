// #include<stdio.h>
// int main () {
//     int num;
//     scanf("%d", &num);
//     if(num >= 80 && num <= 100){
//         printf("We eat buger!");
        
//     }
//     else if( num >= 60 && num < 80){
//         printf("we eat chicken role!");
//     }
//     else{
//         printf("We eat just cha!");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main () {
//     int num ;
//     scanf("%d", &num);
//     if(num > 100){
//         printf("We eact burger!");
//     }
//     else if(num > 50){
//         printf("We each checken Role!");
//     }
//     else{
//         printf("We eat just cha!");
//     }
// }

#include <stdio.h>
int main(){
    int budget; 
    scanf("%d", &budget);

    if(budget >= 5000){
        printf("We are go to cox's bazar\n");
        if(budget >= 10000){
            printf("We are also got to sent martin!");
        }
        else{
            printf("We don't go to sent martin.");
        }
    }
    else{
        printf("We stay in home!");
    }
}
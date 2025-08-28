// ceil, floor, rount build in function => 
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float num;
//     scanf("%f", &num);
//     int ceilResult = ceil(num);
//     printf("Ceil Result => %d\n", ceilResult);
//     int floorResult = floor(num);
//     printf("Floor Result => %d\n", floorResult);
//     int roundResult = round(num);
//     printf("Round Result => %d\n", roundResult);
//     return 0;
// }


//paw, sqrt, abs build in fundtion => 
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d", &num);
    int powResult = pow(num, 3);
    printf("Pow Result => %d\n", powResult);
    int sqrtResult = sqrt(num);
    printf("Sqrt Result => %d\n", sqrtResult);
    int absResult = abs(num);
    printf("Absolute Result => %d\n", absResult);
    return 0;
}
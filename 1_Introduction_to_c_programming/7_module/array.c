// #include<stdio.h>
// int main()
// {
//     int  arr[5], value;
    
//     for (int i = 0; i < ; i++)
//     {
//         scanf("%d", &value);
//         arr[i] = value;
//     }

//     for(int i = 0; i<5; i++){
//         printf("%d\n", arr[i]);
//     }
    
//     return 0;
// }

// print all arrays value in reverse way
// #include<stdio.h>
// int main()
// {
//     int  n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i] );
        
//     }
//     for(int i = n-1; i >= 0; i--){
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }

// sum of all arrays value;
#include<stdio.h>
int main()
{
    int i, n,  arr[5];
    scanf("%d", &n);
    for(i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
        // arr[i] = value;
    }

    int sum = 0;
    
    for(i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("The sum of array is : %d\n", sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int a; 
    scanf("%d", &a);
    int arr[a];
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i<a; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            count1++;
           
        }
        else if(arr[i] % 3 == 0){
            count2++;
          
        }
    }
    printf("%d %d", count1, count2);
    return 0;
}
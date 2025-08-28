#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int i = 0;
    while (true)
    {
        if(a[i] == '\0' && b[i] == '\0'){
            printf("Two value are equal!");
            break;
        }
        else if(a[i] == '\0'){
            printf("A is smaller!");
            break;
        }
        else if(b[i] == '\0'){
            printf("B is smaller!");
            break;
        }
        else if(a[i] == b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("A is smaller!");
            break;
        }
        else if(a[i]> b[i]){
            printf("B is smaller!");
            break;
        }
        
    }
    
    return 0;
}
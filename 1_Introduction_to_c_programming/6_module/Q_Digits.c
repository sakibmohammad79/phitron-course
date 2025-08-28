#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i =1; i<=n ; i++){
        int value; 
        scanf("%d", &value);
      do
        {
            printf("%d ", value % 10);
            value /= 10;
        }   while (value != 0);
        printf("\n");
    }
  
    
    return 0;
}
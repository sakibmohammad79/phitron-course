#include<stdio.h>
#include<math.h>
int main()
{
    int t; scanf("%d", &t);
    for(int k = 1; k<=t; k++){
    int n; scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for(int i = 0; i<n-1; i++){
        for(int j= i+1; j<n; j++){
            if(b[i] > b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
              
            }
        }
    }
    int c[n];
   for(int i =  0; i<n; i++){
    c[i] = abs(a[i] - b[i]);
   }

   for(int i = 0; i<n; i++){
    printf("%d ", c[i]);
   }
      printf("\n");

}

    return 0;
}
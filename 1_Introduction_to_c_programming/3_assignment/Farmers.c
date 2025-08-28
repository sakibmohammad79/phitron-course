#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   for(int i = 1; i<=n; i++){
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int totalWorker = m1 + m2;
    int oneWorkerDoneWorkDays = m1*d;
    int allWorkerDoneWorkDays = oneWorkerDoneWorkDays / totalWorker;
    int reduceDays = d - allWorkerDoneWorkDays;
    printf("%d\n", reduceDays);
}
return 0;
}
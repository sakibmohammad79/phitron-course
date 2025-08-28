#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int minValue = arr[0]; int maxValue = arr[n-1];
        if(minValue%2 == maxValue%2)
            cout << 0 << endl;
        else {
            int i = 0; int count1 = 0;
            while (arr[i]%2 != maxValue%2)
            {
                i++;
                count1++;
            }
            int j = n-1; int count2 = 0;
            while (arr[j]%2 != minValue%2)
            {
                j--;
                count2++;
            } 
            cout << min(count1, count2) << endl;
        }
    }
    
    return 0;
}
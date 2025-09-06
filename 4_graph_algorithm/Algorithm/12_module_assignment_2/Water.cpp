#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int left = 0, right = n - 1;
        int maxWaterHeight = -1;
        long long maxArea = -1;
        int leftIndex = 0, rightIndex = 0;
        
        while (left < right) {
            int waterHeight = min(arr[left], arr[right]);
            int width = right - left;
            long long area = (long long)waterHeight * width;
            
            if (waterHeight > maxWaterHeight) {
                maxWaterHeight = waterHeight;
                maxArea = area;
                leftIndex = left;
                rightIndex = right;
            }
            else if (waterHeight == maxWaterHeight && area > maxArea) {
                maxArea = area;
                leftIndex = left;
                rightIndex = right;
            }
            
            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        cout << leftIndex << " " << rightIndex << "\n";
    }
    
    return 0;
}


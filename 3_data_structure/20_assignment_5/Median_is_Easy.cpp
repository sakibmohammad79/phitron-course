#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> result; 

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            int lastDigit = num % 10; 
            result.push_back(lastDigit);

            
            vector<int> temp = result;
            sort(temp.begin(), temp.end());

           
            int size = temp.size();
            int median;
            if (size % 2 == 1) {
                median = temp[size / 2];
            } else {
                median = temp[(size / 2) - 1];  
            }

            cout << median << endl;
        }
    }

    return 0;
}

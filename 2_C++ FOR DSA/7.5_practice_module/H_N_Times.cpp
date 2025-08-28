#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int num; char value;
        cin >> num >> value;

        for (int i = num; i > 0; i--)
        {
            cout << value;
            if(i != 1){
                cout << " ";
            }
            
        }
        cout << endl;
        
    }
    
    return 0;
}
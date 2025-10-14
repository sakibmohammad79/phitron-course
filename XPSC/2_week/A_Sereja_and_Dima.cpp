#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];
    int left = 0; int right = n-1;
    int turn = 0;
    int sreeja = 0; int dima = 0;
    while (left <= right)
    {
        if(v[right] > v[left]){
            if(turn == 0){
                sreeja += v[right];
                turn = 1;
                right--;
            }
            else{
                dima += v[right];
                turn = 0;
                right--;
            }
        }
        else{
            if(turn == 0){
                sreeja += v[left];
                turn = 1;
                left++;
            }
            else{
                dima += v[left];
                turn = 0;
                left++;
            }
        }
    }
    cout << sreeja << " " << dima;
    return 0;
}
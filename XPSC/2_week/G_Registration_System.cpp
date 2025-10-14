#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> freq;
    while (n--)
    {
        string name; cin >> name;
        if(freq.find(name) ==  freq.end()){
            cout << "OK\n";
            freq[name] = 1;
        }
        else {
            cout << name << freq[name] << '\n';
            freq[name + to_string(freq[name])] = 1; 
            freq[name]++; 
        }
    }
    return 0;
}

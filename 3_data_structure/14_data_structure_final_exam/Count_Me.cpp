#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {   
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        int count = 0;
        string name;
        while (ss >> word)
        {
            mp[word]++;
            if(count < mp[word]){
                count = mp[word];
                name = word;
            }
        }
        cout << name << " " << count << endl;
    }
    
    return 0;
}
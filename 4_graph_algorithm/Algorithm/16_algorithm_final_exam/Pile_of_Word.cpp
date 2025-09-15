#include<bits/stdc++.h>
using namespace std;
bool isPileOfWord(string s1, string s2){
    if(s1.size() != s2.size()){
        return false;
    }
    int freq1[26] = {0};
    int freq2[26] = {0};
    for(char c : s1)
        freq1[c - 'a']++;
    for(char c : s2)
        freq2[c - 'a']++;
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if(isPileOfWord(s1,s2))
            cout << "YES" << endl;
        else
            cout<< "NO" << endl;
    }
    return 0;
}
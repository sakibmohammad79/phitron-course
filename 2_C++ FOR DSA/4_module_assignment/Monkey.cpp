#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    while (getline(cin, word))
    {
        word.erase(remove(word.begin(), word.end(), ' '), word.end());
        sort(word.begin(), word.end());
        cout << word;
        cout << endl;
    }
    
    return 0;
}
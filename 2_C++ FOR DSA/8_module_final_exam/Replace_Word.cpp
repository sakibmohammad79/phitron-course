// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     cin.ignore();
//     while (t--)
//     {
//     string s;
//     getline(cin, s);

//     stringstream stream(s);
//     string sentence;
//     stream >> sentence;
//     string word;
//     stream >> word;
 
//     int len_word = word.size();
//      string result = "";
//     int i = 0;
//     while (i < sentence.length()) {
//         if (sentence.substr(i, word.length()) == word) {
//             result += '#';  
//             i += word.length();  
//         } else {
//             result += sentence[i];  
//             i++;
//         }
//     }

//     cout << result << endl;

//     }
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
    string s;
    getline(cin, s);

    stringstream stream(s);
    string sentence;
    stream >> sentence;
    string word;
    stream >> word;
 
    int i = 0;
    string result = "";
    while (i < sentence.length())
    {
        bool isTrue = true;

        for(int j = 0; j<word.length(); j++){
            if(i+j >= sentence.length() || sentence[i+j] != word[j]){
                isTrue = false;
                break;
            }
        }

        if(isTrue){
            result += "#";
            i += word.length();
        }
        else{
            result += sentence[i];
            i++;
        }
    }
    cout << result << endl;
}
    
    return 0;
}
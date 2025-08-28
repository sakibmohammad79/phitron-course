#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "sakib mohammad sakib";
    //give length
    int length = s.size();
    cout << length << endl;
    //give max array size depend on windows system
    cout << s.max_size() << endl;
    //it's depend on string size
    cout << s.capacity() << endl;
    //resize string
    s.resize(4);
    cout << s << endl; //saki
    //check empty string
    if(s.empty() == 1){
        cout << "empty \n";
    }
    else{
        cout << "not empty\n";
    }

    return 0;
}
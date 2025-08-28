#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100] = "my name is sakib";
    char s1 [100] = "hello";
    // s = "my name is mohammad"; // not possible
    //using strcpy
    strcpy(s, "my name is mohammad");

    //check equality using strcmp
    if(strcmp(s, s1) == 0){
        cout<< "same\n";
    }
    else{
        cout << "not same\n";
    }

    //it's complicated that's why we are use string data type which more flexible
    string a = "sakib\n";
    cout << a;
    a = "mohammad\n"; // it's possible
      cout << a;

      // also we can use equal operator for checking two value

    string b= "sohan";
    if(s == b){
        cout<< "same\n";
    }
    else{
        cout << "not same";
    }

}
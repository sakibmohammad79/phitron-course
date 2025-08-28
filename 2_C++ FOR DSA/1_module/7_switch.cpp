// #include<iostream>
// using namespace std;

// int main(){
//     int day; cin>>day;

//     switch (day){
//         case 1: 
//             cout << "Saturday";
//             break;
//         case 2: 
//             cout << "Sunday";
//             break;
//         case 3: 
//             cout << "Monday";
//             break;
//         case 4: 
//             cout << "Tuesday";
//             break;
//         case 5: 
//             cout << "Wednesday";
//             break;
//         case 6: 
//             cout << "Thursday";
//             break;
//         case 7: 
//             cout << "Friday";
//             break;
//         default:
//         cout << "Not a valid number";
  
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x; cin >> x;
//     switch(x%2){
//         case 0: 
//             cout << "EVEN";
//             break;
//         case 1: 
//             cout << "ODD";
//             break;
//     }
// }

//check vowel using switch
#include<iostream>
using namespace std;

int main(){
    char ch; cin >> ch;
    switch(ch){
        case 'a': 
            cout << "Vowel\n";
            break;
        case 'e': 
            cout << "Vowel\n";
            break;
        case 'i': 
            cout << "Vowel\n";
            break;
        case 'o': 
            cout << "Vowel\n";
            break;
        case 'u': 
            cout << "Vowel\n";
            break;
        default : 
            cout << "Consonant\n";
    }
}
//increase static array size
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int a[5];
//     for(int i = 0; i<5; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i<5; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
    
//     int b[7];
//     for (int  i = 0; i < 5; i++)
//     {
//         b[i] = a[i];
//     }
//     b[5] = 70;
//     b[6] = 80;
//     for(int i = 0; i<7; i++){
//         cout << b[i] << " ";
//     }
// }


//increase dynamic array size
#include<bits/stdc++.h>
using namespace std;
int main() {
    int *a = new int[5];
    for(int i = 0; i<5; i++){
        cin >> a[i];
    }
    for(int i = 0; i<5; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int * b = new int[7];
    for (int  i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    b[5] = 70;
    b[6] = 80;
    for(int i = 0; i<7; i++){
        cout << b[i] << " ";
    }
    cout<<endl;
    
    delete[] a; //delete first array

    return 0;
}


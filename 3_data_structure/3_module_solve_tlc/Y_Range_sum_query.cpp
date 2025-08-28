// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int s, q;
//     cin >> s >> q;
//     vector<int> v(s+1);
//     for (int i = 1; i <=s; i++)
//     {
//         cin >> v[i];
//     }

//     while (q--)
//     {
//         int left, right;
//         cin >> left >> right;
//         long int sum = 0;
//         for (int i = left; i <= right; i++)
//         {
//             sum += v[i];
//         }
//         cout << sum << endl;
//     }
    
//     return 0;
// }
// this code time complexity is O(N*N) which show tle error

// now we are solve this problem using prefix sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, q;
    cin >> s >> q;
    vector<long long> v(s+1);
    for (int i = 1; i <=s; i++)
    {
        cin >> v[i];
    }

    vector<long long> prefix(s+1);
    prefix[1] = v[1];
    for(int i = 2; i<=s; i++){
        prefix[i] = prefix[i-1] + v[i];
    }

    while (q--)
    {
        int left, right;
        cin >> left >> right;
        long long sum = 0;
        if(left == 1){
            sum = prefix[right];
        }
        else{
            sum = prefix[right] - prefix[left - 1];
        }
        cout << sum << endl;
    }
    
    return 0;
}
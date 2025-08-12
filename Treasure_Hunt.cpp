#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;

        long long target = 2 * a + 1;  
        long long bx = 2 * x;          
        long long ky = 2 * y;          

        long long cycleLen = bx + ky;   
        long long cycles = target / cycleLen;
        long long depth = cycles * cycleLen;

        if (depth + bx > target)
            cout << "NO" << endl; 
        else
            cout << "YES" << endl; 
    }
}



// Error Case: Time limit exceeded on test 3

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long x, y, a;
//         cin >> x >> y >> a;

//         double target = a + 0.5;
//         double total = 0.0;
//         bool kFirst = false;

//         while (total < target) {
//             total += x;
//             if (total > target) {
//                 kFirst = false;
//                 break;
//             }
//             total += y;
//             if (total > target) {
//                 kFirst = true;
//                 break;
//             }
//         }

//         if (kFirst)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }

//Date : 30 / 7 / 2025
// Starting Time: 1 : 50 PM
// Tried Till: 3 : 32 PM
// Time Duration: 102  Minutes
// Status : Unsolved

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int total_xor = 0;
        for (int x : a) total_xor ^= x;

        if (total_xor == 0) {
            cout << 1 << "\n1 " << n << "\n";
            continue;
        }

        int prefix_xor = 0, idx = -1;
        for (int i = 0; i < n; i++) {
            prefix_xor ^= a[i];
            if (prefix_xor == total_xor) {
                idx = i;
                break;
            }
        }

        int suffix_xor = 0, idx2 = -1;
        for (int i = n - 1; i > idx; i--) {
            suffix_xor ^= a[i];
            if (suffix_xor == total_xor) {
                idx2 = i;
                break;
            }
        }

        if (idx2 == -1) {
            cout << 2 << "\n";
            cout << 1 << " " << idx + 1 << "\n";
            cout << idx + 2 << " " << n << "\n";
        } else {
            cout << 3 << "\n";
            cout << 1 << " " << idx + 1 << "\n";
            cout << idx + 2 << " " << idx2 << "\n";
            cout << idx2 + 1 << " " << n << "\n";
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> arr(n);

//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];

//         /// Loop for 2 element check

//         for (int i = 0; i < n; i += 2)
//         {
//             int x = 0;
//             if (i < n)
//             {
//                 x = arr[i] ^ arr[i + 1];
//                 arr[i] = x;
//                 arr[i + 1] = x;
//             }
//         }

//         /// Loop for 3 element check

//         for (int i = 0; i < n; i += 3)
//         {
//             int x = 0;
//             if (i < n)
//             {
//                 x = arr[i] ^ arr[i + 1] ^ arr[i + 2];
//                 arr[i] = x;
//                 arr[i + 1] = x;
//                 arr[i + 2] = x;
//             }
//         }

//         /// Loop for all element together
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, count = 0;
//         cin >> n;
//         for (int i = 0; i <= n; i += 1)
//         {
//             if (i % 3 == i % 5)
//                 count++;
//         }
//         cout << count << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long fullBlocks = n / 15;
        long long remainder = n % 15;

        long long count = fullBlocks * 3;
        if (remainder >= 2) count += 3;
        else count += remainder + 1;

        cout << count << endl;
    }
}

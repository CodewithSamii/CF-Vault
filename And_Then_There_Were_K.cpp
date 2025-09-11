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
//         int n, k = 1;
//         cin >> n;

//         while (1)
//         {
//             if ((n & (n - k)) == 0)
//                 break;
//             else
//                 n &= n - k;
//             k++;
//         }
//         cout << n - k << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 1;
        cin >> n;
        while (p * 2 <= n)
            p *= 2;
        cout << p - 1 << endl;
    }
}

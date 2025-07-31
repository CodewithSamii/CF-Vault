// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, count = 0;
//         cin >> n;

//         // for (int i = 2; i < n ; i++, n --)
//         // {
//         //     if (i>=n)
//         //     break;
//         //     else
//         //     count ++;
//         // }

//         // cout << count << endl;

//         if (n > 2)
//             cout << (long long int) ceil(n / 2) - 1 << endl;
//         else
//             cout << 0 << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        cout << max(0LL, (n - 1) / 2) << endl; /// Positive number check, SAFE WAY, ll means long long ,0 constant
    }
    return 0;
}

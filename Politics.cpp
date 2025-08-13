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
        int n, k;
        cin >> n >> k;
        vector<string> s(n);
        for (int i = 0; i < n; i += 1)
            cin >> s[i];

        string me = s[0];
        int ans = 0;
        for (int i = 0; i < n; i += 1)
            if (s[i] == me)
                ans++;

        cout << ans << endl;
    }
}

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
//         int n, topic, countt = 0;
//         cin >> n >> topic;
//         vector<int> numbers;
//         for (int i = 0; i < n; i += 1)
//         {
//             string abc;
//             cin >> abc;
//             int c = count(abc.begin(), abc.end(), '+');
//             numbers.push_back(c);
//         }
//         if (n == 1)
//             cout << 1 << endl;
//         else
//         {
//             int d = count(numbers.begin(), numbers.end(), topic);
//             int e = count(numbers.begin(), numbers.end(), 0);
//             cout << d + e << endl;
//         }
//     }
// }
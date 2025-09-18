// /// Status : Unsolved
// /// Test Case : wrong answer 14th numbers differ : 3 - 1 1 1 - expected: '-1', found: '0'

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
//         int n;
//         cin >> n;
//         int arr[n];
//         set<int> st;
//         vector<int> vec;
//         for (int i = 0; i < n; i += 1)
//             cin >> arr[i];
//         for (int i = 0; i < n; i += 1)
//         {
//             if ((i % 2 == 0 && arr[i] % 2 != 0) || (i % 2 != 0 && arr[i] % 2 == 0))
//             {
//                 st.insert(arr[i]);
//                 vec.push_back(arr[i]);
//             }
//         }
//         // cout << "ST Size : " << st.size() << endl;
//         // cout << "VEC Size : " << vec.size() << endl;
//         // cout << st.size() - (vec.size() - st.size()) << endl;
//         if ((st.size() - (vec.size() - st.size())) % 2 != 0)
//             cout << -1 << endl;
//         else
//             cout << st.size() / 2 << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
    {
        int n, evenpoison = 0, oddpoison = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];
        for (int i = 0; i < n; i += 1)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
                oddpoison++;
            else if (i % 2 != 0 && arr[i] % 2 == 0)
                evenpoison++;
        }
        if (evenpoison != oddpoison)
            cout << -1 << endl;
        else
            cout << evenpoison << endl;
    }
}
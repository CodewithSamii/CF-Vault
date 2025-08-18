// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> p(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> p[i];
//     }

//     string res;
//     int left = 0, right = n - 1;
//     int last = 0;

//     while (left <= right) {
//         if (p[left] < p[right]) {
//             if (p[left] > last) {
//                 res += 'L';
//                 last = p[left];
//                 left++;
//             } else if (p[right] > last) {
//                 res += 'R';
//                 last = p[right];
//                 right--;
//             } else {
//                 break;
//             }
//         } else {
//             if (p[right] > last) {
//                 res += 'R';
//                 last = p[right];
//                 right--;
//             } else if (p[left] > last) {
//                 res += 'L';
//                 last = p[left];
//                 left++;
//             } else {
//                 break;
//             }
//         }
//     }

//     cout << res.size() << '\n';
//     cout << res << '\n';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         // solve();
//         int n, c;
//         cin >> n >> c;
//         set<int> arr2;
//         for (int i = 0; i < n; i += 1)
//         {
//             int x;
//             cin >> x;
//             arr2.insert(x);
//         }
//         vector <int> arr;
//         for (int i = 0; i < n; i += 1)
//         {
//             arr.push_back(*arr2.begin());
//             arr2.erase(arr2.begin());
//         }

//         int count = 0, i = 0;
//         while (arr.empty() != 1)
//         {
//             auto it = arr.begin();
//             if (*it <= c && *it == *max_element(arr.begin(), find(arr.begin(), arr.end(), c)))
//                 arr.erase(it);
//             else
//                 *it *= 2;

//             if (i != arr.size())
//                 advance(it, i);
//             else
//                 i = 0;
//         }
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
        int n;
        long long c;
        cin >> n >> c;
        vector<long long> arr(n);
        for (int i = 0; i < n; i += 1)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        vector<long long> temp;
        for (int i = 0; i < n; i += 1)
        {
            if (arr.empty()) break;

            temp.clear();
         
            for (int j = 0; j < (int)arr.size(); j += 1)
            {
                if (arr[j] <= c)
                    temp.push_back(arr[j]);
            }

            if (!temp.empty())
            {
                auto max_val = *max_element(temp.begin(), temp.end());
                auto it = find(arr.begin(), arr.end(), max_val);
                if (it != arr.end())
                    arr.erase(it);

                
                for (int j = 0; j < (int)arr.size(); j += 1)
                    arr[j] *= 2;
            }
            else
                break;
        }
        cout << arr.size() << endl;
    }
}

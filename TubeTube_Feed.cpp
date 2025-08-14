#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n, t;
        cin >> n >> t;
        vector<int> videos(n), entertain(n);
        
        for (int i = 0; i < n; i++)
            cin >> videos[i];
        for (int i = 0; i < n; i++)
            cin >> entertain[i];

        int ans = -1, best = -1;
        for (int i = 0; i < n; i++)
        {
            if (videos[i] + i <= t && entertain[i] > best)
            {
                best = entertain[i];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int n, t;
//         cin >> n >> t;
//         int videos[n], entertain[n];
//         for (int i = 0; i < n; i += 1)
//             cin >> videos[i];

//         for (int i = 0; i < n; i += 1)
//             cin >> entertain[i];
//         vector<int> index;
//         vector<int> emni;

//         for (int i = 0; i < n; i += 1)
//         {
//             if (videos[i] + i == t)
//                 index.push_back(i);
//         }

//         if (index.empty() == 1)
//         {
//             // bool flag = true;
//             for (int i = 0; i < n; i += 1)
//             {
//                 if (videos[i] == videos[i] < t)
//                     emni.push_back(videos[i]);
//             }
//             // if (flag)
//             //     cout << -1 << endl;
//             if (emni.empty() != 1)
//             {
//                 int d = *max_element(emni.begin(), emni.end());
//                 for (int i = 0; i < emni.size(); i += 1)
//                 {
//                     if (emni[i] == d)
//                         cout << i + 1 << endl;
//                     break;
//                 }
//             }
//             cout << -1 << endl;
//         }

//         else if (index.size() == 1)
//             cout << index[0] + 1 << endl;

//         else
//         {
//             // cout << max(entertain[index[0]], entertain[index[1]]);
//             if (entertain[index[0]] > entertain[index[1]])
//                 cout << index[0] + 1 << endl;
//             else
//                 cout << index[1] + 1 << endl;
//         }
//     }
// }

// /*Unsolved : I think the process is increasing minimum numbers much as possible to highest equal range, here i did it until maximum value but this is wrong. like for tc: 2 3 4, increasing both 2 and 3 to 5 is the solution as per problem description (cz its higheset possible digit to achieve). 7/9/25*/

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
//         int a, b, c, five = 5, ml = 1;
//         cin >> a >> b >> c;
//         vector<int> vec(3);
//         vec.push_back(a);
//         vec.push_back(b);
//         vec.push_back(c);
//         int min_val = *min_element(vec.begin(), vec.end());
//         int max_val = *max_element(vec.begin(), vec.end());
//         while (min_val < max_val)
//         {
//             min_val++;
//             five--;
//             if (five == 0)
//                 break;
//         }
//         ml *= min_val * max_val;
//         if (five > 0)
//         {
//             vec.erase(min_element(vec.begin(), vec.end()));
//             *min_element(vec.begin(), vec.end()) += five;
//         }
//         vec.erase(max_element(vec.begin(), vec.end()));
//         if (vec.size() > 1)
//             vec.erase(min_element(vec.begin(), vec.end()));
//         cout << ml * vec[0] << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double
// #define endl '\n'
// #define fasterio                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);

// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl

// const ll MOD = 1e9 + 7;
// const ll INF = 1e18;

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " = " << (x) << endl
// #else
// #define debug(x)
// #endif

// int main()
// {
//     fasterio;

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         bool status = false;
//         vector<int> num(3);
//         for (int i = 0; i < 3; i += 1)
//             cin >> num[i];
//         int five = 5, i = 0, maximum = *max_element(num.begin(), num.end());
//         for (i; five > 0; i += 1)
//         {
//             int temp = num[i];
//             num[i] += min(five, (maximum - num[i]));
//             five -= min(five, (maximum - temp));
//             // debug(five);

//             if (i == 2)
//                 i = 0;
//             if (num[0] == num[1] && num[1] == num[2])
//                 break;
//         }
//         i = 0;
//         while (five > 0)
//         {
//             num[i]++;
//             five--;

//             if (i == 2)
//                 i = -1;
//             i++;
//         }
//         // for (int i : num)
//         //     cout << i << "  ";
//         // cout << endl;
//         // debug(five);
//         int ml = 1;
//         for (int i : num)
//             ml *= i;
//         cout << ml << endl;
//     }

//     return 0;
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
        vector<int> num(3);
        for (int i = 0; i < 3; i += 1)
            cin >> num[i];

        ll five = 5, ml = 1;

        while (five > 0)
        {
            int index = min_element(num.begin(), num.end()) - num.begin();
            num[index]++;
            five--;
        }

        for (int x : num)
            ml *= x;

        cout << ml << endl;
    }
    return 0;
}
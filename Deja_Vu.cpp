// /**
//  *    Author: saminulislamsami
//  *    Created: 8/10/2025 || 6:12 PM
//  **/

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define ll long long int
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define fasterio                 \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);            \
//     cout.tie(nullptr);

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " = " << (x) << endl
// #else
// #define debug(x)
// #endif

// bool palindrom(string str)
// {
//     string original = str;
//     reverse(str.begin(), str.end());
//     if (str == original)
//         return 1;
//     else
//         return 0;
// }

// void solve()
// {
//     string str;
//     cin >> str;

//     int len = str.length();
//     string temp = "";
//     bool status = false;
//     for (int i = 0; i <= len; i += 1)
//     {
//         int c = i;
//         // int k = c;
//         for (int g = 0; g < c; g += 1)
//             temp.push_back(str[g]);
//         temp.push_back('a');
//         // int d = len - i - 1;
//         for (int j = c; j < len; j += 1)
//             temp.push_back(str[j]);
//         // cout << temp << endl;
//         bool result = palindrom(temp);
//         // debug(result);
//         // debug(temp);

//         if (!result)
//         {
//             yes;
//             cout << temp << endl;
//             status = true;
//             break;
//         }
//         temp.clear();
//     }
//     if (!status)
//         no;
// }

// int main()
// {
//     fasterio;

//     int t;
//     cin >> t;
//     while (t--)
//         solve();
// }

/**
 *    Author: saminulislamsami
 *    Created: 8/10/2025 || 6:32 PM
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fasterio                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

bool palindrom(string str)
{
    string original = str;
    reverse(str.begin(), str.end());
    if (str == original)
        return 1;
    else
        return 0;
}

void solve()
{
    string str;
    cin >> str;

    // int len = str.length();
    // string temp = "";
    // bool status = false;
    
    string temp_b = 'a' + str;
    string temp_e = str + 'a';

    if (!palindrom(temp_b))
    {
        yes;
        cout << temp_b << endl;
        return;
    }
    if (!palindrom(temp_e))
    {
        yes;
        cout << temp_e << endl;
        return;
    }
    no;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}

/// Status : Unsolved

/**
 *    Author: saminulislamsami
 *    Created: 
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

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n; i += 1)
    {
        if (str[i + 2] == '0')
        {
            string s = "";
            s += str[i];
            s += str[i + 1];
            cout << (char)((stoi(s) - 1) + 97);
            i += 2;
        }
        else
            cout << (char)(str[i] + 48);
    }
    cout << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
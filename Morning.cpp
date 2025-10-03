/**
 *    Author: saminulislamsami
 *    Created: 1/10/2025 || 10:07 PM
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
    string str;
    cin >> str;
    int distance = 4, c = 1;
    for (int i = 0; i < 4; i += 1)
    {
        int temp;
        if (str[i] - 48 == 0)
            temp = 10;
        else
            temp = str[i] - 48;
        distance += abs(temp - c);
        c = temp;
    }
    cout << distance << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
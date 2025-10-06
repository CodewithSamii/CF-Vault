//Status : Unsolved. tried during contest

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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    deque<char> solution(n);

    for (int i = 0; i < (n - k); i += 1)
        solution.push_back('+');
    for (int i = 0; i < (int)str.length(); i += 1)
    {
        if (str[i] == '0')
            solution.push_front('-');
        if (str[i] == '1')
            solution.push_back('-');
        if (str[i] == '2')
    }
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
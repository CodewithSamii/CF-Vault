/**
 *    Author: saminulislamsami
 *    Created: 30/9/2025 || 11:44 PM
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

int size(char c)
{
    if (c == 'S')
        return 1;
    if (c == 'M')
        return 2;
    if (c == 'L')
        return 3;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    if (size(a.back()) > size(b.back()))
        cout << '>' << endl;
    else if (size(a.back()) < size(b.back()))
        cout << '<' << endl;
    else
    {
        int a_count = count(a.begin(), a.end(), 'X'), b_count = count(b.begin(), b.end(), 'X');
        if (a.back() == 'S')
        {
            if (a_count < b_count)
                cout << '>' << endl;
            else if (a_count > b_count)
                cout << '<' << endl;
            else
                cout << '=' << endl;
        }

        if (a.back() == 'L')
        {
            if (a_count < b_count)
                cout << '<' << endl;
            else if (a_count > b_count)
                cout << '>' << endl;
            else
                cout << '=' << endl;
        }
        else if (a.back() == 'M')
            cout << '=' << endl;
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
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
    string str;
    cin >> str;

    auto it = find(str.begin(), str.end(), 'Q');
    if (it == str.end())
    {
        cout << 0 << endl;
        return;
    }
    int index = it - str.begin();
    for (int i = 0; i < index; i += 1)
    {
        if (str[i] == 'A')
        {
            str.erase(i, 1);
            i--;
        }
    }
    str.erase(it);
    int a_count = count(str.begin(), str.end(), 'A');
    if (a_count == 0)
    {
        cout << 0 << endl;
        return;
    }
    int q_count = count(str.begin(), str.end(), 'Q');
    cout << q_count * a_count << endl;
    // debug(index);
    // debug(str);
}

int main()
{
    fasterio;

    // int t;
    // cin >> t;
    // while (t--)
    solve();
    

}
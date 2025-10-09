/**
 *    Author: saminulislamsami
 *    Created: 10/10/2025 || 12:26 AM
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
    vector<int> vec(n);
    set<int> st;

    for (int i = 0; i < n; i += 1)
    {
        cin >> vec[i];
        st.insert(vec[i]);
    }
    if (st.size() < k)
    {
        no;
        return;
    }
    yes;
    vector<int> v;
    for (int i : st)
    {
        auto it = find(vec.begin(), vec.end(), i);
        int index = it - vec.begin();
        // debug(index);
        v.push_back(index + 1);
        // cout << index + 1<< ' ';
        k--;
        if (!k)
            break;
    }
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << ' ';
    cout << endl;
}

int main()
{
    fasterio;

    // int t;
    // cin >> t;
    // while (t--)
        solve();
}
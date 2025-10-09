/// Status : Unsolved

/**
 *    Author: saminulislamsami
 *    Created: 9/10/2025 || 8:07 PM
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
    vector<int> vec(n), something, well;
    for (int k = 0; k < n; k += 1)
        cin >> vec[k];
    int mini = *min_element(vec.begin(), vec.end());
    // debug(mini);
    int k = 0;
    for (int i = mini; i < (mini + n); i += 1)
    {
        if (vec[k] != i)
            something.push_back(vec[k]);
        else
            well.push_back(vec[k]);
        k++;
    }
    // for (int i : something) cout << i << "* "; cout << endl;

    if (count(something.begin(), something.end(), something[0]) == something.size())
    {
        cout << 0 << endl;
        return;
    }
    if (!something.empty())
    {
        if (!well.empty())
            cout << *max_element(something.begin(), something.end()) - ((*max_element(well.begin(), well.end())) + 1) << endl;
        else
            cout << *max_element(something.begin(), something.end()) << endl;
    }
    else
        cout << 0 << endl;
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
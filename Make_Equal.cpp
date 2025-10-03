/**
 *    Author: saminulislamsami
 *    Created: 1/10/2025 || 2:54 AM
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
    int n, target, container = 0;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i += 1)
        cin >> vec[i];

    if (n == 1)
        target = vec[0];
    else
    {
        int sum = 0;
        // for (int i = vec.size() - 1; i >= 0; i -= 1)
        // {
        //     if (vec[i - 1] < vec[i])
        //     {
        //         target = vec[i];
        //         break;
        //     }
        // }

        for (int i = 0; i < vec.size(); i += 1)
            sum += vec[i];
        target = sum / n;
    }
    // debug(target);
    bool status = true;
    for (int i = 0; i < vec.size(); i += 1)
    {
        if (vec[i] != target)
        {
            if (vec[i] > target)
            {
                container += abs(vec[i] - target);
                vec[i] -= abs(vec[i] - target);
            }
            else if (vec[i] < target && container >= (target - vec[i]))
            {
                int temp = vec[i];
                vec[i] += abs(target - vec[i]);
                container -= abs(target - temp);
            }
            else
            {
                status = false;
                break;
            }
        }
    }
    if (status)
        yes;
    else
        no;
    // for (int i : vec)
    //     cout << i << ' ';
}

int main()
{
    fasterio;

    int t;
    cin >> t;
    while (t--)
        solve();
}
/**
 *    Author: saminulislamsami
 *    Created: 3/10/2025 || 10:18 PM
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
    ll product = 1;
    cin >> n >> k;
    vector<int> num(n);
    for (int i = 0; i < n; i += 1)
    {
        cin >> num[i];
        product *= num[i];
    }
    // vector<int> vec1 = {7};
    // vector<int> vec2 = {17};
    // vector<int> vec3 = {17, 17};
    // vector<int> vec4 = {17, 7};
    // vector<int> vec5 = {7, 7};

    vector<vector<int>> pr = {{7, 1, 1, 1, 1},
                              {17, 1, 1, 1, 1},
                              {17, 17, 1, 1, 1},
                              {17, 7, 1, 1, 1},
                              {7, 7, 1, 1, 1},
                              {1, 1, 1, 1, 1},
                              {7, 17, 17, 1, 1}};
    bool status = true;
    int i = 0, j = 0, g = 0;
    while (i < 7)
    {
        int mlt = 1;
        for (int g : pr[i])
            mlt *= g;
        // debug(mlt);
        if (mlt * product == 2023)
        {
            int r = 0;
            yes;
            if (k == 1)
                cout << 2023 / product << endl;
            else if (k == 2)
            {
                if (product == 2023)
                    cout << 1 << ' ' << 1 << endl;
                else if (product == 7)
                    cout << 17 << ' ' << 17 << endl;
                else if (product == 119)
                    cout << 17 << ' ' << 1 << endl;
                else if (product == 17)
                    cout << 7 << ' ' << 17 << endl;
                else if (product == 289)
                    cout << 7 << ' ' << 1 << endl;
                else if (product == 1)
                    cout << 7 << ' ' << 289 << endl;
            }
            else
            {
                while (k--)
                {
                    cout << pr[i][r] << ' ';
                    r++;
                }
                cout << endl;
            }
            status = false;
            break;
        }
        i++;
    }
    if (status)
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

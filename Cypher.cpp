/**
 *    Author: saminulislamsami
 *    Created: 27/9/2025 || 1:43 AM
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
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

void solve() {
    int n, d = 0, u = 0;
    cin >> n;
    vector <int > vec(n);
    for(int i = 0; i < n; i += 1)
        cin >> vec[i];
    vector<pair<int, string>> pr(n);
    int k = 0;
    for(int i = 0 ; i < n; i += 1) {
        cin >> pr[i].first;
        cin >> pr[i].second;
        for(int j = 0; j < (int) pr[i].second.length(); j += 1) {
            if(pr[i].second[j] == 'U') u++;
            else d++;
        }
        int diff = abs(d - u);
        if(d < u) diff = (-diff);
        // debug(d);
        // debug(u);
        // debug(diff);
        // debug(pr[i].first + diff);
        // debug(pr[i].first);
        // debug(vec[k]);

        if(vec[k] + diff > 9) cout << (vec[k] + diff) - 10 << " ";
        else if(vec[k] + diff < 0) cout << (vec[k] + diff) + 10 << " ";
        else cout << vec[k]   + diff << " ";
        k++;
        d = 0, u = 0;
    }
    // debug(u);
    // debug(d);
    // int diff = abs(d - u);
    // if(d < u) diff = (-diff);
    // debug(u);
    // debug(d);
    // debug(diff);

    // for(auto &p : pr) {
    // if(p.first + diff > 9) cout << (p.first + diff) - 10 << " ";
    // else cout << p.first  + diff << " ";
    // }
    cout << endl;


}

int main() {
    fasterio;

    int t;
    cin >> t;
    while(t--)
        solve();
}
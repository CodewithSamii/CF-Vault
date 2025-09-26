/// Not Solved yet.

/**
 *    Author: saminulislamsami
 *    Created: 27/9/2025 || 3:24 AM
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
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
    ll n, k;
    cin >> n >> k;
    vector <ll > vec(k);
    for(ll i = 0 ; i < k ; i += 1) cin >> vec[i];

    sort(vec.begin(), vec.end());
    ll max_val = *max_element(vec.begin(), vec.end());
    ll diff = n - max_val;
    ll ones = count(vec.begin(), vec.end(), 1);
    ll need = diff - ones;
    ll operation = ones; ///1 1 1 1 6 6

    // debug(max_val);
    // debug(diff);
    // debug(ones);
    // debug(need);
    // debug(operation);

    vector <ll > final;
    for(ll i = 0; i < k; i += 1) {
        if(vec[i] != 1) {
            final.push_back(vec[i]);
        }
    }
    ll nn = 0;
    while(need != 0 && nn < (int)final.size()) {

        if(final[nn] == 2) {
            final[nn]--;
            operation += 3;
            need -= 2;
        } else if(final[nn] > 2) {
            final[nn]--;
            operation += 2;
            need -= 1;
        } else if(vec[nn] < 2)
            nn++;
    }
    cout << operation << endl;
}

int main() {
    fasterio;

    ll t;
    cin >> t;
    while(t--)
        solve();
}
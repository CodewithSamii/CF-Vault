#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

int main()
{
    fasterio;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    vector<int> vec(n);
    for (int i = 0; i < n; i += 1)
        vec[arr[i] - 1] = i + 1;
    for (int i : vec)
        cout << i << ' ';
}
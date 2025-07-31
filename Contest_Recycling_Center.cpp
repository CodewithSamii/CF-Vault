#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    string res;
    int left = 0, right = n - 1;
    int last = 0;
    
    while (left <= right) {
        if (p[left] < p[right]) {
            if (p[left] > last) {
                res += 'L';
                last = p[left];
                left++;
            } else if (p[right] > last) {
                res += 'R';
                last = p[right];
                right--;
            } else {
                break;
            }
        } else {
            if (p[right] > last) {
                res += 'R';
                last = p[right];
                right--;
            } else if (p[left] > last) {
                res += 'L';
                last = p[left];
                left++;
            } else {
                break;
            }
        }
    }
    
    cout << res.size() << '\n';
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
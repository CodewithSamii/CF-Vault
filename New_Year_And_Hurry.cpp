#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;
    int solved = 0;
    for (int i = 1; i <= n; i++) {
        if (timeLeft >= 5 * i) {
            timeLeft -= 5 * i;
            solved++;
        } else {
            break;
        }
    }

    cout << solved << endl;
}

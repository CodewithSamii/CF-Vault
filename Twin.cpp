#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> coins(n);
    int sum = 0, money = 0;

    for (int i = 0; i < n; i += 1)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end());

    int half_total = sum / 2, c = 0;

    // cout << coins.back() << endl;
    while (money < half_total + 1)
    {
        money += coins.back();
        c += 1;
        coins.pop_back();
    }

    cout << c << endl;
}
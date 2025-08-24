#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, moneyReq = 0;
    cin >> k >> n >> w;

    for (int i = 0; i <= w; i += 1)
        moneyReq += (i * k);
    cout << max(0, moneyReq - n) << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sf = 0, fs = 0;
    cin >> n;
    string days;
    cin >> days;

    for (int i = 0; i < n - 1; i += 1)
    {
        if (days[i] == 'S' && days[i + 1] == 'F')
            sf++;
        if (days[i] == 'F' && days[i + 1] == 'S')
            fs++;
    }
    if (sf > fs)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
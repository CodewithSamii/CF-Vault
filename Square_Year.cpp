#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string a, b;
        a.push_back(str[0]);
        a.push_back(str[1]);
        b.push_back(str[2]);
        b.push_back(str[3]);

        if (pow(stoi(a) + stoi(b), 2) == stoi(str) || floor(sqrt(stoi(str))) == sqrt(stoi(str)))
        {
            if (pow(stoi(a) + stoi(b), 2) == stoi(str))
                cout << stoi(a) << ' ' << stoi(b) << endl;
            else
                cout << 0 << ' ' << sqrt(stoi(str)) << endl;
        }
        else
            cout << -1 << endl;
    }
}
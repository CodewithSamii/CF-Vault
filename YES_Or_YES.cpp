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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i += 1)
            s[i] = tolower(s[i]);
        if (s == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
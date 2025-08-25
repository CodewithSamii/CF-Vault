#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> word1;
    vector<char> word2;
    vector<char> word3;

    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = 0; i < a.length(); i += 1)
        word1.push_back(a[i]);

    for (int i = 0; i < b.length(); i += 1)
        word2.push_back(b[i]);

    for (int i = 0; i < c.length(); i += 1)
        word3.push_back(c[i]);

    // for (char ch : word1)
    //     cout << ch << endl;
    if (a.length() + b.length() == c.length())
    {
        for (int i = 0; i < a.length(); i += 1)
        {
            auto it = find(word3.begin(), word3.end(), word1[i]);
            if (it != word3.end())
                word3.erase(it);
        }
        for (int i = 0; i < b.length(); i += 1)
        {
            auto it = find(word3.begin(), word3.end(), word2[i]);
            if (it != word3.end())

                word3.erase(it);
        }
        if (word3.empty() == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

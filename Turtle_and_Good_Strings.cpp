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
        int n;
        cin >> n;
        string word;
        cin >> word;

        if (word.size() >= 2 && word[0] != word[n - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
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
        string word;
        cin >> word;
        int ACount = count(word.begin(), word.end(), 'A');
        if (ACount > 2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}
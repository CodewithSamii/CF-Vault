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
        int count = 0;
        string word;
        cin >> word;
        for (int i = 0; i < word.length(); i += 1)
        {
            if (word[i] == '1')
                count++;
        }
        cout << count << endl;
    }
}
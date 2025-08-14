#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<char> word(n);
        for (int i = 0; i < n; i += 1)
            cin >> word[i];
        int i = 0;
        if (word[0] == 'M' || word[0] == 'm')
        {
            while (word[i] == 'M' || word[i] == 'm')
            {
                word.erase(word.begin() + i);
                i++;
            }
        }
        else
            cout << "NO" << endl;
        i = 0;
        if (word[0] == 'E' || word[0] == 'e')
        {
            while (word[i] == 'E' || word[i] == 'e')
            {
                word.erase(word.begin() + i);
                i++;
            }
        }
        else
            cout << "NO" << endl;
        i = 0;
        if (word[0] == 'O' || word[0] == 'o')
        {
            while (word[i] == 'O' || word[i] == 'o')
            {
                word.erase(word.begin() + i);
                i++;
            }
        }
        else
            cout << "NO" << endl;
        i = 0;
        if (word[0] == 'W' || word[0] == 'w')
        {
            while (word[i] == 'W' || word[i] == 'w')
            {
                word.erase(word.begin() + i);
                i++;
            }
        }
        else
            cout << "NO" << endl;
        if (word.empty() != 1)
            cout << "NO" << endl;
        else 
            cout << "YES" << endl;
    }
}
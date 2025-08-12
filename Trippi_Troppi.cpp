#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    
    while (t--)
    {
        string sent;
        getline(cin, sent);
        int len = sent.length();
        vector <char> str;

        str.push_back(sent[0]);
        for (int i = 0; i < len; i += 1)
        {
            if (sent[i] == ' ')
                str.push_back(sent[i+1]);
        }
        for (char ch : str)
            cout << ch;
        cout << endl;
        str.clear();
    }
}
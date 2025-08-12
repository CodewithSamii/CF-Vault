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
        string w;
        cin >> w;
        

        int len = w.length();
        vector<char> word;

        for (int i = 0; i < len; i += 1)
            word.push_back(w[i]);
        //     cout << "VECTOR:" ;
        // for (int i = 0; i < len; i += 1)
        //     cout << word[i];
        word.pop_back();
        word.pop_back();
        word.push_back('i');

        for (char ch : word)
            cout << ch;
        cout << endl;
    }
}
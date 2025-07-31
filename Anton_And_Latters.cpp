#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    bool found = true;
    getline(cin, word);
    int len = word.length();

    // cout << len << endl;
    vector<char> v;
    for (int i = 0; i < len; i += 1)
        v.push_back(word[i]);

    // for (char f : v)
    // cout << f;
    v.erase(v.begin());
    v.erase(v.end() - 1);

    // for (char f : v)
    // cout << f;

    vector<char> v2;
    for (int i = 0; i < (len - 2); i += 3)
    {
        for (char ch : v2)
        {
            if (v[i] == ch)
            {
                found = false;
                break;
            }
        }
        if (found)
            v2.push_back(v[i]);
        found = true;
    }

    // for (char f : v2)
    // cout << f;

    int len2 = v2.size();

    cout << len2 << endl;
}

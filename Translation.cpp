#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str_word, back_word;
    cin >> str_word >> back_word;
    int len1 = back_word.length();
    int len2 = str_word.length();
    vector<char> final;

    bool index = true;

    for (int i = (len1 - 1); i >= 0; i -= 1)
        final.push_back(back_word[i]);
    // for (char c : final)
    //     cout << c;

    int len3 = final.size();

    if (len2 == len3)
    {
        for (int i = 0; i < len2; i += 1)
        {
            if (final[i] != str_word[i])
            {
                index = false;
                break;
            }
            else
                continue;
        }
    }
    else
        index = false;

    if (index)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
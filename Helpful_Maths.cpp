#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int len = word.length();

    vector<char> ch;
    for (int i = 0; i < len; i += 2)
        ch.push_back((int)word[i]);
    sort(ch.begin(), ch.end());
    int p = ch.size();

    for (int i = 0; i < p ; i +=1)
    {
        cout << ch[i];

        if (i != (p-1))
        cout << "+";
    }
}

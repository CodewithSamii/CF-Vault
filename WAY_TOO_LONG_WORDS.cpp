#include <bits/stdc++.h>
using namespace std;

string abbMaker(string word)
{
    int n = word.length();
    if (n > 10)
    {
        return word[0] + to_string(n - 2) + word[n - 1];
    }
    else
    {
        return word;
    }
}

int main()
{
    string word;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> word;
        string result = abbMaker(word);
        cout << result << endl;
    }
}


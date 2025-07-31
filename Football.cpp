#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int len = word.length(), index = 1;
    bool dangerous = false;

    for (int i = 0; i < len - 1; i += 1)
    {
        if (word[i] == word[i + 1])
        {
            index++;
            if (index == 7)
            {
                dangerous = true;
                break;
            }
        }
        else
            index = 1;
    }
    if (dangerous)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
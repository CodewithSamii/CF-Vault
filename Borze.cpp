#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string number;
    cin >> number;

    int i = 0;
    while (i < number.length())
    {
        if (number[i] == '-' && i + 1 < number.length())
        {
            if (number[i + 1] == '.')
            {
                cout << 1;
                i += 2;
            }
            else if (number[i + 1] == '-')
            {
                cout << 2;
                i += 2;
            }
        }
        else if (number[i] == '.')
        {
            cout << 0;
            i += 1;
        }
    }
}

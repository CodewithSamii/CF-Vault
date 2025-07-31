#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    int t;
    cin >> t;

    while (t--)
    {
        cin >> number;
        int index = (int)number[0];

        int len = number.length();

        for (int i = 0; i < len; i += 1)
        {
            if ((int)number[i] < index)
                index = (int)number[i];
        }
        cout << (char)index << endl;
    }
}
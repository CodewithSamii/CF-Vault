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
        string number;
        cin >> number;
        if ((int)number[0] > (int)number[2])
            cout << number[0] << '>' << number[2] << endl;
        else if ((int)number[0] < (int)number[2])
            cout << number[0] << '<' << number[2] << endl;
        else
            cout << number[0] << '=' << number[2] << endl;
    }
}
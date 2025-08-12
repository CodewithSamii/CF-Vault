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

        if (number.length() >= 3 && number[0] == '1' && number[1] == '0')
        {
            number.erase(number.begin());
            number.erase(number.begin());

            if (number[0] != '0')
            {
                int temp = stoi(number);
                if (temp > 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

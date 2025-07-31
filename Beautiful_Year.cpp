#include <bits/stdc++.h>
using namespace std;

int main()
{
    string low_year, result;
    cin >> low_year;
    int ily = stoi(low_year);

    // cout << ily << endl;

    for (int i = ily + 1; i <= 9020; i += 1)
    {
        bool found = false;
        for (int j = 0; j < 4; j += 1)
        {
            for (int k = 0; k < 3; k += 1)
            {
                if ( j != k && to_string(i)[j] == to_string(i)[k])
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (!found)
        {
            cout << i << endl;
            break;
        }
    }
}

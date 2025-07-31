#include <bits/stdc++.h>
using namespace std;

int weight_check(int w)
{
    bool index = false;
    for (int i = 2; i <= (w - 2); i += 2)
    {
        for (int j = 2; j <= (w - 2); j += 2)
        {
            if (i + j == w)
            {
                index = true;
                break;
            }
        }
        if (index == true) break;
    }
    return index;
}

int main()
{
    int w;
    cin >> w;

    if (w > 100 || w < 0) return 0;

    int check = weight_check(w);
    if (check == 1)
        cout << "YES";
    else
        cout << "NO";
}

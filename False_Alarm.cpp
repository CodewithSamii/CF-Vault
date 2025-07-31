#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, t, p;

    cin >> t;
    while (t--)
    {
        bool index = true;
        cin >> g >> p;
        int arr[g];
        for (int i = 0; i < g; i += 1)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < g; i += 1)
        {
            if (arr[i] == 0)
                continue;
            else if (arr[i] == 1)
            {

                i += p;
                p = 0;
                
            }

            if (i < g)
            {
                if (arr[i] == 1)
                {
                    index = false;
                    break;
                }
            }
            
        }

        if (!index)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
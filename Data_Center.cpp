#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int root = sqrt(x), index = 100000000, index0 = 0;

    if (root * root == x)
        cout << sqrt(x) * 4;
    else
    {
        for (int i = 1; i<=x ; i+=1)
        {
            if (x % i == 0 )
            {
                index0 = (i*2) + ((x/i)*2);
                if (index0 < index)
                index = index0;
            }
        }
        cout << index << endl;
    }

}


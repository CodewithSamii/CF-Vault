#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c = 1;
    cin >> m >> n;

    for (int i = 0; i < m; i +=1){
        if (c%4 == 0)
        cout << "#";

        for (int j = 0; j < (n-1); j +=1)
        {
            if (i%2 == 0)
            cout << "#";
            else
                cout << ".";
        }
        if (c%4 != 0)
            cout << "#";
        c++;
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string decider;
    cin >> decider;

    int acount = 0, bcount = 0;

    for (int i = 0; i < n; i += 1)
    {
        if (decider[i] == 'A')
            acount++;
        else
            bcount++;
    }
    if (acount == bcount)
        cout << "Friendship"<< endl;
    else if (acount > bcount)
        cout << "Anton" << endl;
    else 
        cout << "Danik" << endl;
}
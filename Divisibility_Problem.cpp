/*
#include <bits/stdc++.h>
using namespace std;

long long int prec(int a, int b)
{
    for (int i = a; i < 1000000001; i += 1)
    {
        if (i % b == 0)
            return i;
    }
}

int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        int count = prec(a,b);
        count = count - a;
        cout << count << endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> a >> b;
        int reminder = a % b;

        if (reminder == 0)
            cout << 0 << endl;

        else
            cout << b - reminder << endl;
    }
}
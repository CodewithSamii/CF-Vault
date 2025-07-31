#include <bits/stdc++.h>
using namespace std;

int totalprb(int n)
{
    int index = 0;
    while (n--)
    {
        int c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        if ((c1 + c2 + c3) > 1)
            index += 1;
    }
    return index;
}
int main()
{
    int n;
    cin >> n;
    int result = totalprb(n);
    cout << result << endl;
}
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
        int n;
        cin >> n;
        int arr[n * 2], zeroCount = 0, oneCount = 0;
        for (int i = 0; i < (n * 2); i += 1)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeroCount++;
            else if (arr[i] == 1)
                oneCount++;
        }
        int maximum = min(zeroCount, oneCount);
        int minimum = 0;
        if (zeroCount % 2 != 0)
            minimum = 1;
        cout << minimum << " " << maximum << endl;
    }
}
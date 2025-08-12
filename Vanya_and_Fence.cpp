#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i += 1)
    {
        if (arr[i] > h)
            sum += 2;
        else
            sum += 1;
    }
    cout << sum << endl;
}
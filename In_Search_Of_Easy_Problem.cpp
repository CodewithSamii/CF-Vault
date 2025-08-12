#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i += 1)
    {
        
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}
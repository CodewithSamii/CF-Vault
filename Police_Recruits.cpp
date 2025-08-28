#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, police = 0, crime = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    for (int i = 0; i < n; i += 1)
    {
        if (arr[i] > 0)
            police += arr[i];
        if (arr[i] < 0 && police <= 0)
            crime++;
        else if (arr[i] < 0 && police > 0)
            police--;
    }
    cout << crime << endl;
}
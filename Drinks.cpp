#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    long double count = 0;
    for (int i = 0; i < n; i += 1)
        count += arr[i];

    cout << fixed << setprecision(12) << count / n << endl;
}
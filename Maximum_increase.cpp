
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, counter = 0, mcounter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
    for (int i = 0; i < (n - 1); i += 1)
    {
        if (arr[i] < arr[i + 1])
            counter++;
        else
        {
            mcounter = max(counter, mcounter);
            counter = 0;
        }
    }
    mcounter = max(counter, mcounter); 
    cout << mcounter + 1 << endl;
}


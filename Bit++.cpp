#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, count = 0;
    cin >> x;

    vector<string> arr(x);
    for (int i = 0; i < x; i++)
        cin >> arr[i];

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == "++X" || arr[i] == "X++")
            count++;
        else if (arr[i] == "--X" || arr[i] == "X--")
            count--;
    }

    cout << count << endl;
    return 0;
}

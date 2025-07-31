#include <bits/stdc++.h>
using namespace std;

int step(int x)
{
    int count = 0;
    int arr[] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i += 1)
    {
        if (x / arr[i] > 0)
        {
            count += x / arr[i];
            x = x % arr[i];
        }
        if (x == 0)
            break;
    }
    return count;
}

int main()
{
    int x;
    cin >> x;
    int result = step(x);
    cout << result << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i +=1)
    cin >> arr[i];

    for (int i = 0; i < n; i +=1){
        if (arr[i] > 0 && arr[i] >= arr[k - 1]){
            count += 1;
        }
    }
    cout << count << endl;
}
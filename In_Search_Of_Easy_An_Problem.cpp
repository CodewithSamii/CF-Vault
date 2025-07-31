#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool found = true;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i <n; i+=1)
    cin >> arr[i];

    for (int i = 0; i <n ; i+=1){
        if (arr[i] == 1){
            found = false;
            break;
        }
    }
    if (!found)
    cout << "HARD";
    else
    cout << "EASY";
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "I hate ";

    if (n % 2 != 0){
        for (int i = 0; i <(n-1)/2; i +=1){
        cout << "that I love that I hate ";
        }
    }
    else{
        for (int i = 0; i < (n-2)/2 ; i +=1)
            cout << "that I love that I hate ";
        cout << "that I love ";
    }

    cout << "it";
}
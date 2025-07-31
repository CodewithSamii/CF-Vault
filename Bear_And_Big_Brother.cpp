#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limak_w, bob_w, year = 0;
    cin >> limak_w >> bob_w;

    do {
        limak_w *= 3;
        bob_w *= 2;
        year +=1;
    }
    while(limak_w <= bob_w);

    cout << year << endl;
}
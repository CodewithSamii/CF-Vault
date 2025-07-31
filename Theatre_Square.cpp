#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long result = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << result << endl;
}

/*

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, m, a;
    cin >> n >> m >> a;

    long long length_tiles = ceil(n / a);
    long long width_tiles = ceil(m / a);
    
    cout << length_tiles * width_tiles << endl;

    return 0;
}


*/

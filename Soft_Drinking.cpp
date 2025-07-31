#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_juice = (k * l) / (n * nl);     
    int total_lime = (c * d) / n;             
    int total_salt = p / (n * np);            

    int result = min({total_juice, total_lime, total_salt});
    cout << result << endl;
}

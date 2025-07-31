#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    cin >> n;

    vector<string> str(n);

    for (int i = 0; i < n; i += 1)
        cin >> str[i];

    for (string s : str)
    {
        if (s == "Octahedron")
            count += 8;
        if (s == "Icosahedron")
            count += 20;
        if (s == "Cube")
            count += 6;
        if (s == "Tetrahedron")
            count += 4;
        if (s == "Dodecahedron")
            count += 12;
    }

    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i += 1)
        cin >> vec[i];
    int onec = count(vec.begin(), vec.end(), 1);
    int twoc = count(vec.begin(), vec.end(), 2);
    int threec = count(vec.begin(), vec.end(), 3);
    int p = min(onec, min(twoc, threec));
    cout << p << endl;

    if (p > 0)
    {
        for (int i = 0; i < p; i += 1)
        {
            auto d = find(vec.begin(), vec.end(), 1);
            int pos1 = d - vec.begin() + 1;
            cout << pos1 << ' ';
            vec[pos1 - 1] = -1;

            auto e = find(vec.begin(), vec.end(), 2);
            int pos2 = e - vec.begin() + 1;
            cout << pos2 << ' ';
            vec[pos2 - 1] = -1;

            auto f = find(vec.begin(), vec.end(), 3);
            int pos3 = f - vec.begin() + 1;
            cout << pos3 << ' ';
            vec[pos3 - 1] = -1;

            cout << endl;
        }
    }
}

/*

Alternative :

#include <bits/stdc++.h>
    using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> ones, twos, threes;
    for (int i = 1; i <= n; i+=1)
    {
        int x;
        cin >> x;
        if (x == 1)
            ones.push_back(i);
        else if (x == 2)
            twos.push_back(i);
        else if (x == 3)
            threes.push_back(i);
    }

    int p = min({(int)ones.size(), (int)twos.size(), (int)threes.size()});
    cout << p << endl;
    for (int i = 0; i < p; i+= 1)
    {
        cout << ones[i] << ' ' << twos[i] << ' ' << threes[i] << endl;
    }
    return 0;
}
*/